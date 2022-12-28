class Solution
{
    public:
        int minStoneSum(vector<int> &piles, int k)
        {
            priority_queue<int> pq(piles.begin(), piles.end());
            while (k > 0)
            {
                auto top = pq.top();
                pq.pop();
                int val = floor(top / 2);
                top -= val;
                pq.push(top);
                k--;
            }
            int ans = 0;
            while (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            return ans;
        }
};