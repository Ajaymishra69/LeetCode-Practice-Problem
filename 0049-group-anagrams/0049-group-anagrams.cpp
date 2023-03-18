class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<string>temp;
        multimap<string,string>mp;
        for(auto i:strs){
            string x = i;
            sort(i.begin(),i.end());
            mp.insert(pair<string,string>(i,x));
            temp.push_back(i);
        }
        sort(temp.begin(),temp.end());
        for(auto i:mp)cout<<i.first<<":"<<i.second<<endl;
        vector<string>t;
        t.push_back(mp.find(temp[0])->second);
        mp.erase(mp.find(temp[0]));
       for(int i=1;i<temp.size();i++){
           if(temp[i]==temp[i-1]){
               t.push_back(mp.find(temp[i])->second);
               mp.erase(mp.find(temp[i]));
           }
           else{
               ans.push_back(t);
               t.clear();
              t.push_back(mp.find(temp[i])->second);
               mp.erase(mp.find(temp[i]));
           }
       }
        ans.push_back(t);
        return ans;
    }
};