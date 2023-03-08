class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        for(int i=0;i<=9;i++)
            mp[i]=0;
        for(auto i:num)
            mp[stoi(string(1,i))]++;
        // for(auto i:mp)
        //     cout<<i.first<<":"<<i.second<<endl;
        for(int i=0;i<num.size();i++){
            if(stoi(string(1,num[i])) != mp[i])
                return false;
        }
        return true;
    }
};