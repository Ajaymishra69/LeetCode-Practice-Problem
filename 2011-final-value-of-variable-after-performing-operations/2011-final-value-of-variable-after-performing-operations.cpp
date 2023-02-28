class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int cnt =0;
        for(auto i : op){
            if(i=="X++" || i=="++X")
                cnt++;
            else
                cnt--;
        }
        return cnt;
    }
};