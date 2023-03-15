class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        int mini = 100000;
        vector<string>ans;
        for(int i=0;i<l1.size();i++){
            for(int j=0;j<l2.size();j++){
                if(l1[i]==l2[j]){
                     if(i+j<mini and ans.size()!=0){
                        ans.pop_back();
                        ans.push_back(l1[i]);
                        mini=i+j;
                    }
                    else if(i+j<mini and ans.size()==0){
                        ans.push_back(l1[i]);
                        mini=i+j;
                    }
                    else if(i+j==mini)
                        ans.push_back(l1[i]);
                }
            }
        }
        return ans;
    }
};