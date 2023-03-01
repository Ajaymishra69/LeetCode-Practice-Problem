class Solution {
public:
    bool checkIfPangram(string sen) {
        string str;
        set<string>st;
        istringstream ss(sen);
        while(ss>>str){
            for(auto i:str)
                st.insert(string(1,i));
            str.pop_back();
        }
        if(st.size()==26)
            return true;
        return false;
    }
};