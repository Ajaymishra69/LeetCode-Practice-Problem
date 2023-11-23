class Solution {
public:
    bool check(vector<int>&temp){
        int n = temp.size();
        //cout<<"0"<<endl;
        for(int i =0;i<n-1;i++){
            if(temp[i+1] - temp[i] != temp[1] - temp[0])
                break;
        }
       // cout<<"1"<<endl;
        sort(temp.begin(),temp.end());
         for(int i =0;i<n-1;i++){
            if(temp[i+1] - temp[i] != temp[1] - temp[0])
                break;
        }
       // cout<<"2"<<endl;
        sort(temp.begin(),temp.end(),greater<int>());
         for(int i =0;i<n-1;i++){
            if(temp[i+1] - temp[i] != temp[1] - temp[0])
                return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();
        vector<bool>res;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            bool ans = check(temp);
            res.push_back(ans);
        }
        return res;
    }
};