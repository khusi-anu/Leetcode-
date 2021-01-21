class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        
        int last = nums.size() - k;
        vector<int> ans;
        for (auto num: nums)
        {
            int size = ans.size();
            while (last> 0 && !ans.empty() && num < ans.back())
            {
                ans.pop_back();
                last--;
            }
            ans.push_back(num);
        }
        return vector<int>(ans.begin(), ans.begin() + k);
    }
    
};
