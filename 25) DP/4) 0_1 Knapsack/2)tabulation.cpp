int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int> > dp(n,vector<int>(W+1));
        
        for(int i= wt[0]; i<=W;i++)
            dp[0][i] = val[0];
            
        for(int row=1; row<n;row++){
            for(int weight=0; weight<=W; weight++){
                
                int notTake =  0+ dp[row-1][weight];
                int take = INT_MIN;
                
                if(wt[row] <= weight){
                    take = val[row] + dp[row-1][weight-wt[row]];
                }
                
                dp[row][weight] = max(take,notTake);
            }
        }
        return dp[n-1][W];
       // Your code here
    }
