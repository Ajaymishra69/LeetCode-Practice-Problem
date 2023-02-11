class Solution {
public:
    void bfs(vector<pair<int,int>> adj[],int n,vector<int> & dist){
    queue<pair<int,int>> q;
    q.push({0,-1});
    map<pair<int,int>,bool> visi;
    visi[{0,-1}] = 1;
    int level = -1;
    while(!q.empty()){
        level++;
        int si = q.size();
        while(si--){
            int node = q.front().first;
            int color = q.front().second;
            q.pop();
            dist[node] = min(dist[node],level);
            for(auto & it : adj[node]){
                int col = it.second;
                if(col!=color && visi.count({it.first,col})==0){
                    // cout<<node <<" -> "<<it.first<<" col "<<color<<" "<<col<<endl;
                    q.push({it.first,col});
                    visi[{it.first,col}] = 1; 
                }
            }
        }
    }
}
vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges,
 vector<vector<int>>& blueEdges) {
    //1->{2,color}
    //color 0->red
    //color 1->blue
    vector<pair<int,int>> adj[n];
    for(auto & it : redEdges){
        // if(it[0]!=it[1]){
            adj[it[0]].push_back({it[1],0});
        // }
    }
    for(auto & it:blueEdges){
        // if(it[0]!=it[1]){
            adj[it[0]].push_back({it[1],1});
        // }
    }
    vector<int> dist(n,1e9);
    bfs(adj,0,dist);
    for(auto & it : dist) if(it==1e9) it=-1;
    return dist;
}
};