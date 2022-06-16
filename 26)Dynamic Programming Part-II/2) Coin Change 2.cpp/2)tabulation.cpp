
class Solution {
public:
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int> > dp(coins.size() ,vector<int>(amount+1,0));
        
        int n = coins.size();
        
        for(int T=0;T<=amount; T++){
            if(T % coins[0] == 0)
                dp[0][T] = T/coins[0];  
            else
                 dp[0][T]= 1e9;
            
        }
        
        for(int ind = 1; ind<n;ind++){
            for(int T=0;T<=amount; T++){
                int take = INT_MAX;
                
                int notTake = dp[ind-1][T];
                
                if(coins[ind] <= T){
                    take = 1 + dp[ind][T-coins[ind]]; 
                }
                dp[ind][T] = min(take,notTake);
            }
        }
        
        int ans=dp[n-1][amount];
        if(ans>=1e9) return -1;
        return ans;
    }
    
    
    
};
