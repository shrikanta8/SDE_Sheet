#include<bits/stdc++.h>

int minSumPath(vector<vector<int>> &grid) {
    int r = grid.size(), c=grid[0].size();
    vector<int> pre(c);
    
    for(int i=0; i<r ; i++){
        vector<int> cur(c);
        for(int j=0; j<c; j++){
            if(i==0 && j==0) 
                cur[j] = grid[i][j];
            else{
                int up =1e9,left=1e9;
                
                if(i>0) 
                    up = pre[j];
                
                if(j>0) 
                    left= cur[j-1];
                
                cur[j] = min(up,left) + grid[i][j];
            }
        }
        pre=cur;
    }
    
    return pre[c-1];

    // Write your code here.
}
