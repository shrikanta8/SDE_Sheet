//in tabulation we start from base condition check of recursion 

bool subsetSumToK(int n, int sum, vector<int> &arr) {
    
    vector<bool> pre(sum+1);
    
      //when target = 0  
    pre[0]=1;
    
    pre[arr[0]]=1;    //at target==arr[0] it is true
    
    for(int i=1;i<n;i++){
        vector<bool> curr(sum+1);
        curr[0]=1;    //at target = 0 it is always true
        for(int target = 1;target<=sum;target++){
            
             bool notTaken = pre[target];
    
            bool taken = false;
            if(arr[i] <= target)
                taken = pre[ target-arr[i] ];

             curr[target] = notTaken||taken;
        }
        pre=curr;
    }
    return pre[sum];
    // Write your code here.
}

Time Complexity: O(N*K)

Reason: There are three nested loops

Space Complexity: O(K)

Reason: We are using an external array of size ‘K+1’ to store only one row.

