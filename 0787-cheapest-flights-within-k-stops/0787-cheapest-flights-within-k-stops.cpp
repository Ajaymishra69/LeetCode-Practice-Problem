class Solution
{
    public:

        int f(int stops, int source, int destination, int n, vector<vector < int>> &adj, vector< vector< int>> &dp)
        {
           	// Base Case
            if (stops < 0) return 1e7;
            if (source == destination) return 0;

           	// Recursive Case
            if (dp[stops][source] != -1) return dp[stops][source];
            int ans = 1e7;
            for (int i = 0; i < n; i++)
            {
                if (adj[source][i] != -1) ans = min(ans, adj[source][i] + f(stops - 1, i, destination, n, adj, dp));
            }

            return dp[stops][source] = ans;
        }

    int findCheapestPrice(int n, vector<vector < int>> &flights, int src, int dst, int k)
    {
        vector<vector < int>> adj(n, vector<int> (n, -1));
        for (int i = 0; i < flights.size(); i++)
        {
            adj[flights[i][0]][flights[i][1]] = flights[i][2];
        }

        vector<vector < int>> dp(k + 2, vector<int> (n, -1));
        int val = f(k + 1, src, dst, n, adj, dp);
        return (val == 1e7 ? -1 : val);
    }
};