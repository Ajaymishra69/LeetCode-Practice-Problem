class Solution
{
    public:
        int compress(vector<char> &chars)
        {
            unordered_map<char, int> mp;
            string str = "";
            for (auto i: chars)
            {
                if (mp.find(i) != mp.end())
                    mp[i]++;
                else
                {
                    for (auto i: mp)
                    {
                        if (i.second == 1)
                        {
                            str += i.first;
                        }
                        else
                        {
                            str += i.first + to_string(i.second);
                        }
                    }
                    mp.clear();
                    mp[i]++;
                }
            }
            for (auto i: mp)
            {
                if (i.second == 1)
                    str += i.first;
                else
                    str += i.first + to_string(i.second);
            }
            chars.clear();
            istringstream ss(str);
            string temp;
            while (ss >> temp)
            {
                int n = temp.size();
                for (int i = 0; i < n; i++)
                {
                    chars.push_back(temp[i]);
                }
                temp.pop_back();
            }
            return chars.size();
        }
};