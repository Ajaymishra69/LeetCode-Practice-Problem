class Solution
{
    public:
        void fun(int ind, int tar, vector<int> &candi,
            vector<vector < int>> &res, vector< int > &temp)
        {

            if (tar <= 0 || ind == candi.size())
            {
                if (tar == 0)
                    res.push_back(temp);	// Base Case
                return;
            }

            for (int i = ind; i < candi.size(); i++)
            {

                if (i > ind && candi[i] == candi[i - 1])
                    continue;

                if (candi[i] > tar)
                    break;

                temp.push_back(candi[i]);
                tar -= candi[i];

                fun(i + 1, tar, candi, res, temp);

                tar += candi[i];
                temp.pop_back();
            }
        }
    vector<vector < int>> combinationSum2(vector<int> &candi, int tar)
    {
        vector<int> temp;
        vector<vector < int>> res;
        sort(candi.begin(), candi.end());
        fun(0, tar, candi, res, temp);
        return res;
    }
};