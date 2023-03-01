class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rk, string rv) {
        int cnt=0;
        if(rk == "type"){
            for(auto i:items){
                if(i[0]==rv)
                    cnt++;
            }
        }
        else if(rk == "color"){
            for(auto i:items){
                if(i[1]==rv)
                    cnt++;
            }
        }
        else{
            for(auto i:items){
                if(i[2]==rv)
                    cnt++;
            }
        }
        return cnt;
    }
};