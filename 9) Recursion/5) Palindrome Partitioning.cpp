//https://leetcode.com/problems/palindrome-partitioning/

class Solution {
public:
    bool isPalindrome(string s,int i, int l){
        
        while(i<=l){
            if(s[i++]!=s[l--])
                return false;
        }
        return true;
    } 
    void chk(vector<vector<string>>& ans, string s, int l, int ind, vector<string>& ds){
        if(ind == l){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<l;i++){
                if(isPalindrome(s,ind,i) ){
                    ds.push_back(s.substr(ind,i-ind+1));
                    chk(ans,s,l,i+1,ds);
                    ds.pop_back();
                }
                
        }
    } 
    vector<vector<string>> partition(string s) {
        vector<vector<string> > ans;
        vector<string> ds;
        int l=s.length();
        chk(ans, s,l,0,ds);
        return ans;
    }
};

//Time Complexity: O( (2^n) *k*(n/2) )
  O(2^n) to generate every substring 
  O(n/2)  to check if the substring generated is a palindrome
  O(k) is for inserting the palindromes in another data structure, where k  is the average length of the palindrome list
  
//Space Complexity: O(k * x)
  k is the average length of the list of palindromes 
  x is list of palindromes 
