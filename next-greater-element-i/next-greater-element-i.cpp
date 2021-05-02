class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        
        unordered_map<int, int> mp;
        for(auto num2 : nums2)
        {
            while(!s.empty() && num2 > s.top())
            {
                mp[s.top()] = num2;
                s.pop();
            }
            s.push(num2);
        }
      
        vector<int> result;
        for(auto n1: nums1)
        {
            if(mp.find(n1) == mp.end())
            {
                result.push_back(-1);
            }
            else
            {
                result.push_back(mp[n1]);
            }
        }
    return result;
    }
};

    