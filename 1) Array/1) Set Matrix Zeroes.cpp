//https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        bool col = false;   //mark whether first column is having zero or not
        
        //setting first row and first column with zeroes where zeroes are present in matrix
        for(int i=0;i<r;i++){
            
            if( matrix[i][0]==0 ){
                col =true;  //it means first column will be completly zero
            }
            for(int j=1;j<c;j++){
                if( matrix[i][j]==0 ){
                    matrix[0][j]=0,matrix[i][0] = 0;
                }
            }
        }
        
        //setting that particular row's and col's to 0
        for(int i=r-1;i>=0; i--){
            for(int j=c-1;j>0; j--){
                
                if( !matrix[0][j] || !matrix[i][0] )
                    matrix[i][j] = 0;
            }
            
            if(col) //handling first column
                matrix[i][0]=0;
        }
        
    }
};
