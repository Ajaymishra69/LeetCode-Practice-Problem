class Solution
{
    public:
        string interpret(string command)
        {
            string str = "";
            string ans = "";
            istringstream ss(command);
            while (ss >> str)
            {
                int n = str.size();
                for (int i = 0; i < n; i++)
                {
                    if (str[i] == '(' && str[i + 1] == ')')
                    {
                        ans += "o";
                    }
                    if (str[i] == '(' && str[i + 1] == 'a' && str[i + 2] == 'l' &&
                        str[i + 3] == ')')
                    {
                        ans += "al";
                    }
                    if (str[i] == 'G')
                    {
                        ans += "G";
                    }
                    else
                        continue;
                }
                str.pop_back();
            }
            return ans;
        }
};