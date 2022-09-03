//

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int len=s.length();
        vector<int> dp(len);
        
        for(int i= 0;i<len;i++){        //i is keeping track for end letter
            int siz= i + 1; 
            //initial size of word
            
            for(int j=0; j<=i; j++){        
               
                string newStr = s.substr(j,siz--);  //checking strings of all size 
                
                if(find(wordDict.begin(), wordDict.end(),newStr) != wordDict.end()){
                    
                    if(j>0 && dp[j-1]==1)
                        dp[i] = 1;
                    else if(j==0)   //if word is starting from start
                        dp[i]=1;
                }
            }
        }
        return dp[len-1];
        
        // working of j for i=3
             //like word is leetcode
            //leet
            //eet
            //et
            //t
    }
};
