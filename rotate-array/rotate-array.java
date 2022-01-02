class Solution {
    
    public void reverse(int start, int end, int a[]) {
        
        while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    }
    
    public void rotate(int[] nums, int k) {
        
        k = k % nums.length;
        
        reverse(0, nums.length -1, nums);
        reverse(0, k - 1, nums);
        reverse(k, nums.length - 1, nums);
    }
}