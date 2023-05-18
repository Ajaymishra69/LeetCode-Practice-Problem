class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>vis(n,false);
        for(auto it : edges){
            int x = it[0];
            int y = it[1];
            vis[y] = true;
        }
        vector<int>ans;
        for(int it=0;it<n;it++){
            if(vis[it]==false)
                ans.push_back(it);
        }
        return ans;
    }
};