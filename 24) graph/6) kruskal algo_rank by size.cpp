// m edges=>
// TC => m log m
class Solution {
  public:
    vector<int> parent,unionSize;
    
    static bool comparator(vector<int>& a, vector<int>& b){
        return a[2]<b[2];
    }
    
    void unionBySize(int u,int v){
        int parU=findParent(u);
        int parV=findParent(v);
        
        if(parU==parV){
            return;
        }
        
        if(unionSize[parU]>unionSize[parV]){
            unionSize[parU]+=unionSize[parV];
            parent[parV]=parU;
        }
        else{
            unionSize[parV]+=unionSize[parU];
            parent[parU]=parV;
        }
    }
    
    int findParent(int u){
        if(u==parent[u]){
            return u;
        }
        return parent[u]=findParent(parent[u]);
    }
    
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        
        int ans=0;
        parent.resize(V);
        unionSize.resize(V);
        sort(edges.begin(),edges.end(),comparator);
        
        for(int i=0;i<V;i++){
            parent[i]=i;
        }
        
        for(auto edg:edges){
            int u=edg[0],v=edg[1],wei=edg[2];
            if(findParent(u)!=findParent(v)){
                ans+=wei;
                unionBySize(u,v);
            }
        }
        return ans;
    }
};
