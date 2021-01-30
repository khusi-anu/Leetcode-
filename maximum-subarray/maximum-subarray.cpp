class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], max = nums[0];
        int n = nums.size();
        for( int i = 1; i < n; i++ )
        {
            sum = (nums[i] > nums[i]+sum)? nums[i] : nums[i]+sum;
            max = (max > sum) ? max : sum;
            
            
        }
        return max;
    }
};