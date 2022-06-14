//in tabulation we start from base condition check of recursion 

bool subsetSumToK(int n, int sum, vector<int> &arr) {
    vector<vector<bool> > dp(n,vector<bool>(sum+1) );
    
    for(int i=0;i<n;i++)    //when target = 0 all vlues will be true; 
        dp[i][0]=1;
    
    dp[0][arr[0]]=1;    //at target==arr[0] it is true
    
    for(int i=1;i<n;i++){
        for(int target = 1;target<=sum;target++){
            
             bool notTaken = dp[i-1][target];
    
            bool taken = false;
            if(arr[i] <= target)
                taken = dp[i-1][ target-arr[i] ];

             dp[i][target] = notTaken||taken;
        }
    }
    return dp[n-1][sum];
    // Write your code here.
}
