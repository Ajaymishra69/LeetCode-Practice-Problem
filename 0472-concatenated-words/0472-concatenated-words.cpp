class Solution {
public:
    bool isconcat(string word , unordered_set<string>&st ){
        int l = word.length();
        for(int i=0;i<l;i++){
            string prefix = word.substr(0,i+1);
            string suffix = word.substr(i+1);
            if((st.find(prefix)!=st.end() && st.find(suffix)!=st.end()) ||
               (st.find(prefix)!=st.end() && isconcat(suffix,st)))
               return true;
        }
               return false;
    }
    
    
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> res;
        int n = words.size();
        unordered_set<string> st(begin(words),end(words));
        for(int i=0; i<n;i++)
        {
            string word = words[i];
            if(isconcat(word,st))
                res.push_back(word);
        }
        return res;
    }
};