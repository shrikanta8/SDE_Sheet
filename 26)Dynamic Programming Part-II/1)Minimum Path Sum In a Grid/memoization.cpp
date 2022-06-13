//https://www.codingninjas.com/codestudio/problems/minimum-path-sum_985349?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

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

Time Complexity: O(N*M)

Reason: At max, there will be N*M calls of recursion.

Space Complexity: O((M-1)+(N-1)) + O(N*M)

Reason: We are using a recursion stack space:O((M-1)+(N-1)), here (M-1)+(N-1) is the path length and an external DP Array of size ‘N*M’.

