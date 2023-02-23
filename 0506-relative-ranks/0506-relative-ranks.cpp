class Solution
{
    public:
        vector<string> findRelativeRanks(vector<int> &score)
        {
            vector<int> s;
            vector<string> ans;
            s = score;
            unordered_map<int, string> v;
            sort(s.begin(), s.end(), greater<int> ());
            for (int i = 0; i < s.size(); i++)
            {
                if (i == 0)
                    v[s[i]] = "Gold Medal";
                else if (i == 1)
                    v[s[i]] = "Silver Medal";
                else if (i == 2)
                    v[s[i]] = "Bronze Medal";
                else
                    v[s[i]] = to_string(i + 1);
            }
            for (auto i: score)
            {
                ans.push_back(v[i]);
            }
            return ans;
        }
};