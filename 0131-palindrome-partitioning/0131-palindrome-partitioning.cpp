class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        fun(0,s,res,path);
        return res;
    }
    void fun(int index , string s , vector<vector<string>>&res,vector<string>&path)
    {
        if(index==s.size()) // base condition
        {
            res.push_back(path);
            return;
        }
        for(int i=index; i<s.size();++i)
        {
            if(ispalin(s,index,i))
            {
                path.push_back(s.substr(index,i-index+1));
                fun(i+1,s,res,path);
                path.pop_back();
            }
        }
    }
    bool ispalin(string s , int start , int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
};