#include<bits/stdc++.h>

int minSumPath(vector<vector<int>> &grid) {
    int r = grid.size(), c=grid[0].size();
    vector<vector<int>> dp(r,vector<int>(c));
    
    for(int i=0; i<r ; i++){
        for(int j=0; j<c; j++){
            if(i==0 && j==0) 
                dp[i][j] = grid[i][j];
            else{
                int up =1e9,left=1e9;
                
                if(i>0) 
                    up = dp[i-1][j];
                
                if(j>0) 
                    left=dp[i][j-1];
                
                dp[i][j] = min(up,left)+grid[i][j];
            }
        }
    }
    
    return dp[r-1][c-1];

    // Write your code here.
}

Time Complexity: O(N*M)

Reason: There are two nested loops

Space Complexity: O(N*M)

Reason: We are using an external array of size ‘N*M’’.

