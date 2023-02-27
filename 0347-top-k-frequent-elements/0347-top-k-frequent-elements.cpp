class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        vector<int>ans;
        vector<int>temp;
        for(auto it : nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        for(int i =0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        // for(auto it : mp){
        //  ans.push_back(it.second);
        // }
        // sort(ans.begin(),ans.end(),greater<int>());
        // for(int i=0;i<k;i++)
        // {
        //     temp.push_back(mp[ans[i]]);
        // }

        return ans;
    }
};