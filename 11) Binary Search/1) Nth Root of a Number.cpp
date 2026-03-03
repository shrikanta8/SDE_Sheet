class Solution {
  public:
    int powerFind(int x,int y,int m ){
        int ans=1;
        
        while(y>0){
            if(y%2!=0){
                ans=ans*x;
                if(ans>m){
                    return 2;
                }
                y-=1;
            }
            else{
                x=x*x;
                y/=2;
            }
        }
        if(m==ans){
            return 1;
        }
        return -1;
    }
    int nthRoot(int n, int m) {
        if(n==0 || m==0){
            return 0;
        }
        // Code here
        int mid,start=1,end=m;
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            int val=powerFind(mid,n,m);
            if(val==1){
                return mid;
            }
            if(val==2){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
        
    }
};






--------------------------------------------------













//https://www.youtube.com/watch?v=5snE6xsyheE


double eps= 1e-7;    //we want 6 decimal places hence 7
double func(double mid, int n)
{
    double num=1.0;
    for(int i=1;i<=n; i++)
    {
         num*= mid;
    }
    return num;
}

double findNthRootOfM(int n, long long m) {
    double low=1, high=m, mid ;
    
    while((high-low)> eps)
    {
        mid=(low+high)/2.0;
       
        if(func(mid, n)< m)
        {
            low= mid;
        }
        else 
            high=mid;
    }
    return low;
}


Time Complexity: N x log(M x 10^d)
//N times we are multiplying 
//d is accuracy

Space Complexity: O(1)

