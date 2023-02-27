class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<pair<int,pair<int,int>>> dist;
        vector<vector<int>>ans;
        // unordered_map<vector<int>,double>mp;
        // double dist;
        // priority_queue<pair<int,int>>pq;
        for(auto it : p){
            int d = (it[0]*it[0]+it[1]*it[1]);
            dist.push_back({d,{it[0],it[1]}});
        }
        sort(dist.begin(),dist.end());
        for(int i=0;i<k;i++){
            ans.push_back({dist[i].second.first,dist[i].second.second});
        }
        return ans;
        // for(auto it:mp){

        // }

        // int n = p.size();
        // int m = p[0].size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){

        //     }
       // }
    }
};