class WordDictionary
{
    public:
        vector<string> st;
    WordDictionary() {}

    void addWord(string word)
    {
        st.push_back(word);
    }

    bool search(string word)
    {
        int cnt = 0;
        int n = word.size();
        for (int i = 0; i < st.size(); i++)
        {
            if (n == st[i].size())
            {
                for (int j = 0; j < n; j++)
                {
                    if (st[i][j] == word[j] || word[j] == '.')
                        cnt++;
                    else
                    {
                        cnt = 0;
                        break;
                    }
                }
                if (cnt == n)
                    return true;
            }
        }
        return false;
    }
};

/**
 *Your WordDictionary object will be instantiated and called as such:
 *WordDictionary* obj = new WordDictionary();
 *obj->addWord(word);
 *bool param_2 = obj->search(word);
 */