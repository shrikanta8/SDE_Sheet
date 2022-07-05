
class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int N=m+n-2;
        //N = total paths that we will take
        
        int r=min(n,m)-1;
        //we are finding NCr
        //r can be either down or right path
        //if we get ways of filling r in N then it is our ans
        //since in remaining places other direction will be filled
        
        double res=1;
        for(int i=1;i<=r;i++){
            res = res*(N-r+i)/i;
        }
        return (int)res;
    }
};
