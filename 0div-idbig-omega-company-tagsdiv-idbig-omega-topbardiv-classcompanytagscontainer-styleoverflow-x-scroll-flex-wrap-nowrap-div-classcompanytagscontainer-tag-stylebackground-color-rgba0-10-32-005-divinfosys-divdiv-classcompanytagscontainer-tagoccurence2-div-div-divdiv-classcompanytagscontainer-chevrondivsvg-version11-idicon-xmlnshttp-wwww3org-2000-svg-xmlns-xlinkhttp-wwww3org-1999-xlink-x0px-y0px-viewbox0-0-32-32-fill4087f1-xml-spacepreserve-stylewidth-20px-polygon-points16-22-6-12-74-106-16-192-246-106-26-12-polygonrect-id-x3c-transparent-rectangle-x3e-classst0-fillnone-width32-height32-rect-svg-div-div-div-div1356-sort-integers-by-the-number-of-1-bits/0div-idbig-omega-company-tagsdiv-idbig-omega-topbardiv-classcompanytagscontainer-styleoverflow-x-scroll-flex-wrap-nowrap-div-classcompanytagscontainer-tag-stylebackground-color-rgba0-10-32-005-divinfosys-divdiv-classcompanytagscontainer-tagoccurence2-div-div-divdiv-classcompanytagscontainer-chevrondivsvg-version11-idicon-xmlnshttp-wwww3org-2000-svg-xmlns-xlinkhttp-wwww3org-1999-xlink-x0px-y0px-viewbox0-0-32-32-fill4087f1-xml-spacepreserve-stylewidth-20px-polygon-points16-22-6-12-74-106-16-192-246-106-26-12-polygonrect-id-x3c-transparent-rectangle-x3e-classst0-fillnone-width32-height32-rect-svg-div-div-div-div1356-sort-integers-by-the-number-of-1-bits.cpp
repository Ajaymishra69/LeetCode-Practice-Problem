class Solution {
public:
    int cntsb(int n){
        int cnt=0;
        while(n){
            cnt+=n&1;
            n>>=1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>mp;
        for(int i=0;i<n;i++){
            int temp = cntsb(arr[i]);
            mp.push({temp,arr[i]});
        }
        while(!mp.empty()){
            ans.push_back(mp.top().second);
            mp.pop();
        }
        return ans;
    }
};