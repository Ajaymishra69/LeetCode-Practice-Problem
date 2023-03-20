class Solution
{
    public:
        bool canPlaceFlowers(vector<int> &f, int n)
        {
            int cnt = 0;
            int m = f.size();
            if (m == 1 && f[0] == 0)
            {
                cnt++;
                f[0] = 1;
            }
            else if (m >= 2)
            {
                if (f[0] == 0 && f[1] != 1)
                {
                    cnt++;
                    f[0] = 1;
                }
                if (f[m - 1] == 0 && f[m - 2] != 1)
                {
                    cnt++;
                    f[m - 1] = 1;
                }

                for (int i = 1; i < f.size() - 1; i++)
                {
                    if ((i + 1) % 2 != 0 && f[i] == 0 && f[i - 1] != 1 && f[i + 1] != 1)
                    {
                        cnt++;
                        f[i] = 1;
                    }
                }
            }
            if (cnt >= n)
                return true;
            return false;
        }
};