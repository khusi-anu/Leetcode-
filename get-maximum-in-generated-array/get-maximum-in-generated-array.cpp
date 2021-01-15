class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n == 0)
            return 0;
        
        int arr[2*n + 2];
        arr[0] = 0;
        arr[1] = 1;
        
        int max = 1;
        for(int i = 1; i <= n; i++)
        {
            if(2*i > n)
                break;
            arr[2*i] = arr[i];
            
            if(2*i + 1 > n)
                break;
            arr[2*i + 1] = arr[i] + arr[i+1];
            
            if(max < arr[2*i])
                max = arr[2*i];
            
            if(max < arr[2*i + 1])
                max = arr[2*i + 1];
            
        }
        return max;
    }
};
