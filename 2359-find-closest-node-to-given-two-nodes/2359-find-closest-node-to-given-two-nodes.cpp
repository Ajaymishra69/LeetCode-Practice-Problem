class Solution {
public:
    
    int dist[2][100005];

    void dfs(int node, int i, vector<int>& edges, int d){
        dist[i][node] = d;
        if(edges[node] != -1 && dist[i][edges[node]] == -1){
           dfs(edges[node], i, edges, d+1);
        }
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        memset(dist,-1,sizeof(dist));
        dfs(node1, 0, edges, 0);
        dfs(node2, 1, edges, 0);
        int mn = INT_MAX;
        int idx = -1;
        for(int i=0;i<n;i++){
            if(dist[0][i] == -1 || dist[1][i] == -1) continue;
            if(max(dist[0][i], dist[1][i]) < mn) {
                mn = max(dist[0][i], dist[1][i]);
                idx = i;
            }
        }
        return idx;
    }
};