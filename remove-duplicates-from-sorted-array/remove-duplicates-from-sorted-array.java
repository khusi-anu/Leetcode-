class Solution {
    public int removeDuplicates(int[] nums) {
        
        int pos = 0;
        int start_i = 0;
        
        int length = nums.length;
        while(start_i < length) {
            
            int value = nums[start_i];
            
            while((start_i < length-1) && nums[start_i] == nums[start_i + 1] )
                start_i = start_i + 1;
            
            nums[pos++] = value;
            
            start_i++;
        }
        return pos;
    }
}