class Solution {
public:
    
    int countVowel(int n, int k) {
    
        if(k == 1)
            return k;
        
        if(n == 1)
            return k;
        
        int ans=0;
        for(int i = 0;i < k; i++)
            ans += countVowel(n-1,k-i);
        
        return ans;
    }
​
    
    int countVowelStrings(int n) {
        return countVowel(n, 5);
    }
};
