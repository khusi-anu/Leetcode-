class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum = 1, ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            ans += sum - nums[i];
            sum++;
        }
        
        return ans;
    }
};