class Solution {
public:
    
    int longestCommonSubsequence(string s, string t) {
        int l1= s.length(),l2=t.length();
        
        vector<int > pre(l2+1, 0); 
        vector<int > curr(l2+1);
        
        for(int i=1;i<=l1;i++){
            for(int j=1;j<=l2;j++){
            
                if(s[i-1] == t[j-1])
                    curr[j] = 1 + pre[j-1];
                else
                    curr[j] = max( curr[j-1], pre[j] );
            }
            pre=curr;
        }
        return curr[l2];
    }
};
