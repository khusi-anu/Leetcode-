class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0;
        int right = height.size()-1;
        
        int maximum = 0;
        int ans = 0;

        while(left < right)
        {
            int temp = min(height[left], height[right]) * (right - left);
            if(maximum < temp)
                maximum = temp;
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maximum;
    }
};