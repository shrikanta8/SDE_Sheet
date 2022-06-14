//https://www.codingninjas.com/codestudio/problems/subset-sum-equal-to-k_1550954?leftPanelTab=0

int helper(vector<int>arr, int target, int n,vector<vector<int > >& dp){
    if(target==0)
        return true;
    
    if(n == 0)
        return arr[0] == target;
    
    if(dp[n][target]!=-1)
        return dp[n][target];
        
    bool notTaken = helper(arr,target,n-1,dp);
    
    bool taken = false;
    if(arr[n]<=target)
        taken = helper(arr,target-arr[n],n-1,dp);
        
    return dp[n][target]= notTaken||taken;
}

bool subsetSumToK(int n, int sum, vector<int> &arr) {
    vector<vector<int> > dp(n,vector<int>(sum+1,-1) );
    return helper(arr,sum,n-1, dp);
    // Write your code here.
}
