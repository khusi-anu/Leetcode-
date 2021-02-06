class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int length1 = text1.length();
        int length2 = text2.length();
        
        int ans[length1+1][length2+1];
        
        for(int i = 0;i <= text1.size();i++)
        {
            for(int j = 0;j <= text2.size() ;j++){
                if( j==0 || i== 0)
                    ans[i][j] = 0;
                else if (text1[i-1] == text2[j-1])
                    ans[i][j] = 1+ ans[i-1][j-1];
                else
                    ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
            }
        }
        return ans[length1][length2];
    
    }
};