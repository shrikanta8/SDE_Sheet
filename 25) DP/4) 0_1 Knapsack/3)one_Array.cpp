int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<int> pre(W+1);
        
        for(int i= wt[0]; i<=W;i++)
            pre[i] = val[0];
            
        for(int row=1; row<n;row++){
            for(int weight=W; weight>= 0; weight--){
                //traversing from right to left because 
                // current index and it's right values are not being required in left values computation
                int notTake =  0 + pre[weight];
                int take = INT_MIN;
                
                if(wt[row] <= weight){
                    take = val[row] + pre[weight-wt[row]];
                }
                
                pre[weight] = max(take,notTake);
            }
        }
        return pre[W];
       // Your code here
    }

Time Complexity: O(N*W)

Reason: There are two nested loops.

Space Complexity: O(W)

Reason: We are using an external array of size ‘W+1’ to store only one row.

