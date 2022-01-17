class Solution {
    public boolean isAnagram(String s, String t) {
        
        int[] characters = new int[26];
        
        for (int i = 0; i < s.length(); i++)
            characters[s.charAt(i) - 'a']++;
        
        for (int i = 0; i < t.length(); i++) 
            characters[t.charAt(i) - 'a']--;
        
        for (int i : characters) 
            if (i != 0) return false;
        return true;
    }
}