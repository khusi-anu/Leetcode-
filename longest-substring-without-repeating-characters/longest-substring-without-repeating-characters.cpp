#include<algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> characters;
        int ans = 0;
        int i = 0, j = 0;
        while(s[j] != '\0')
        {
            if(characters.find(s[j]) == characters.end())
            {
                characters.insert(s[j]);
                j++;
            }
            else
            {
                characters.erase(s[i]);
                i++;
            }
            int length = characters.size();
            ans = (ans > length)? ans : length;
        }
        return ans;
    }
};