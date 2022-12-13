class Solution
{
    vector<vector < int>> dp;

    int dfs(int row, int col, vector<vector < int>> &matrix)
    {
        if (row == matrix.size() - 1)
            return matrix[row][col];

        if (dp[row][col] != -1)
            return dp[row][col];

        int ans = dfs(row + 1, col, matrix);
        if (col > 0)
            ans = min(ans, dfs(row + 1, col - 1, matrix));
        if (col < matrix[0].size() - 1)
            ans = min(ans, dfs(row + 1, col + 1, matrix));

        dp[row][col] = ans + matrix[row][col];
        return dp[row][col];
    }
    public:
        int minFallingPathSum(vector<vector < int>> &matrix)
        {
            int minSum = INT_MAX;

            int n = matrix.size(), m = matrix[0].size();
            dp = vector<vector < int>> (n, vector<int> (m, -1));

            for (int i = 0; i < m; i++)
            {
                minSum = min(minSum, dfs(0, i, matrix));
            }

            return minSum;
        }
};