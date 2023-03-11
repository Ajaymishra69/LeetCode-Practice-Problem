class Solution {
public:
    int minOperations(vector<string>& logs) {
        vector<string> str;
        for(auto it : logs){
                if(it=="../"){
                    if(str.empty())
                        continue;
                    else
                        str.pop_back();
                }
                else if(it!="./")
                    str.push_back(it);
            
        }
        int ans = str.size();
        return ans<0?0:ans;
    }
};