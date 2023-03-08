class Solution {
public:
    int maximumValue(vector<string>& strs) {
        vector<int>v;
        int flag=0;
        for(auto i:strs){
            for(int it=0;it<i.size();it++){
                if(isdigit(i[it])==0)
                    {
                        flag=1;
                        break;
                    }
                else
                    flag=0;
            }
            if(flag==0)
                v.push_back(stoi(i));
            else
                v.push_back(i.size());
        }
        sort(v.begin(),v.end());
        int n= v.size();
        return v[n-1];
    }
};