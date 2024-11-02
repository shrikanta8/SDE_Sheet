//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

  int maxValue(int price[], int len, vector<vector<int> >& dp, int ind){
        
        if(ind==0){
            return len*price[0];    //( (len/1)*price[0])
        }
        if(len==0)
            return 0;
        if(dp[ind][len] !=-1)
            return dp[ind][len] ;
            
        int notTake= maxValue(price,len,dp,ind-1);
        int take = 0;
        
        if(ind + 1 <=len){
            take = price[ind] + maxValue(price,len-(ind+1),dp,ind);
        }
        
        return dp[ind][len] = max(take,notTake);
    }
    int cutRod(int price[], int n) {
        vector<vector<int> > dp(n+1,vector<int>(n+1,-1));
        return maxValue(price,n,dp,n);
    }




Tabulation
int cutRod(int price[], int n) {
        vector<vector<int> > dp(n,vector<int>(n+1));
        for(int i=1;i<=n;i++){
            dp[0][i]=i*price[0];
        }
        for(int ind=1;ind<n;ind++){
            for(int len=1;len<=n;len++){
                int notTake= dp[ind-1][len];
                int take = 0;
                
                if(ind + 1 <=len){
                    take = price[ind] + dp[ind][len-(ind+1)];
                }
                dp[ind][len] = max(take,notTake);
            }
        }
        return dp[n-1][n];
    }
