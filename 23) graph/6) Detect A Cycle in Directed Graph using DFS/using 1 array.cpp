// https://leetcode.com/problems/course-schedule/description/
// you can finish courses if there is no cycle
class Solution {
public:
    vector<int> visit;
    bool isCycle(vector<int> adj[],int node){
        visit[node]=2;
        for(auto nei:adj[node]){
            if(visit[nei]==2){
                return true;
            }
            if(visit[nei]==0){
                if(isCycle(adj,nei)==true){
                    return true;
                }
            }
        }
        visit[node]=1;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto ele:prerequisites){
            adj[ele[1]].push_back(ele[0]);
        }
        visit.resize(numCourses);
        for(int i=0;i<numCourses;i++){
            if(visit[i]==0){
                if(isCycle(adj,i)){
                    return false;
                }
            }
        }
        return true;
    }
};
