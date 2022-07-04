//https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
    
        sort(interval.begin(), interval.end());
        vector<vector<int>> ans;
        
        vector<int> res = interval[0];
        
        for(auto it: interval){
            
            if(it[0] <= res[1]){
                res[1] = max(res[1],it[1]); //updating res if it is in our range
            }
            else{
                ans.push_back(res); //push in the answer if it is out of our range
                res=it;
                
            }
        }
        ans.push_back(res);
        return ans;
    }
};
