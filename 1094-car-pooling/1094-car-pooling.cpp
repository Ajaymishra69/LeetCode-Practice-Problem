class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(),trips.end(),[&](auto &a , auto &b){
            return a[1]<b[1];
        });
        bool ans = true;
        int curr = 0;
        vector<pair<int,int>>v;
        for(auto i : trips){
            curr = i[1];
            for(int i=0;i<v.size();i++){
                if(v[i].second!=-1 && v[i].second<=curr){
                    capacity+=v[i].first;
                    v[i].first = -1;
                    v[i].second = -1;
                }
            }
            if(capacity>=i[0]){
                capacity-=i[0];
                v.push_back({i[0],i[2]}); 
            }
            else
            {
                ans = false;
                break;
            }
        }
        return ans;
    }
};