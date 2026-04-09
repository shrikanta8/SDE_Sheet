class Solution {
public:
    
    int func(string& s, string& t, int i1,int i2,vector<vector<int>>& dp){
        if(i1 < 0 || i2 < 0){
            return 0;
        }
        if(dp[i1][i2]!=-1) return dp[i1][i2];
        
        if(s[i1] == t[i2]){
            return dp[i1][i2]= func(s,t,i1-1,i2-1,dp) + 1;
            
        }
        return dp[i1][i2] = max(func(s,t,i1,i2-1,dp),func(s,t,i1-1,i2,dp));
    }
    int longestCommonSubsequence(string s, string t) {
        vector<vector<int>> dp(s.length(), vector<int>(t.length(),-1));
        return func(s,t,s.length()-1,t.length()-1,dp);
    }
};
