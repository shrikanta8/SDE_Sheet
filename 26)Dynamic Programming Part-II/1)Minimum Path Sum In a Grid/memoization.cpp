#include<bits/stdc++.h>
int memoization( vector<vector<int>>& dp, vector<vector<int>> &grid, int x,int y){
    if(x<0 || y<0)
        return 1e9;
    
    if(dp[x][y] != -1)
        return dp[x][y];
    
    int left = grid[x][y] + memoization(dp,grid,x-1,y);
    int right = grid[x][y] + memoization(dp,grid,x,y-1);
    return dp[x][y] = min(left, right);
}
int minSumPath(vector<vector<int>> &grid) {
    int r = grid.size(), c=grid[0].size();
    vector<vector<int>> dp(r,vector<int>(c,-1));
    dp[0][0] = grid[0][0];
    return memoization(dp,grid,r-1,c-1);
    // Write your code here.
}
