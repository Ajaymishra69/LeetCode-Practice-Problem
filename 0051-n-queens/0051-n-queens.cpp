class Solution
{
    // void addSolution(vector < string> &board, vector< vector< string>> &ans, int n)
    // {
    //     vector<string> temp;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             temp.push_back(board[i][j]);
    //         }
    //     }
    //     ans.push_back(temp);
    // }

    bool isSafe(int row, int col, vector < string> &board, int n)
    {
       	// saari queens left to right fill kar rahe hai to right me check karne ke jaroorat 
       	// nahi hai column-wise.

        int x = row, y = col;

       	// check for same row   row same hai col decrement hoga

        while (y >= 0)
        {
            if (board[x][y] == 'Q')
                return false;
            y--;
        }
       	//column check karne ki need nahi hai kyuki hum ek 'Q' at a time daal rahe hai-col me

       	// Diagonal check
        x = row, y = col;
        while (y >= 0 && x >= 0)
        {
            if (board[x][y] == 'Q')
                return false;
            y--;
            x--;
        }
        x = row, y = col;
        while (y >= 0 && x < n)
        {
            if (board[x][y] == 'Q')
                return false;
            y--;
            x++;
        }
        return true;
    }

void solve(int col, vector < string> &board, vector< vector< string>> &ans, int n)
    {
        if (col >= n)
        {
            ans.push_back(board);	// base case jab saare col check hojaye to ans me
            return;	// add kar denge board ke content ko
        }
       	//solving case 1
        for (int i = 0; i < n; i++)	// sirf ek ke liye check karnege baaki recur dekhlega
        {
            if (isSafe(i, col, board, n))	// kya is position pe queen rakhna safe hai
            {
                board[i][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[i][col] = '.';// backtrack
            }
        }
    }
    public:
        vector<vector < string>> solveNQueens(int n)
        {
            vector< string> board(n, string (n,'.'));
            vector<vector < string>> ans;

            solve(0, board, ans, n);

            return ans;
        }
};













// class Solution {
// public:
//     vector<vector<string>> ans;
//     int nl;

//     bool check(vector<string> &v, int row, int col) {
//         /* Check this row on left side */
//         for(int i=0; i<col; i++) if(v[row][i] == 'Q') return false;
//         /* Check upper diagonal on left side */
//         for(int i=row, j=col; i>=0 and j>=0; i--, j--) if(v[i][j] == 'Q') return false;
//         /* Check lower diagonal on left side */
//         for(int i=row, j=col; j>=0 and i<nl; i++, j--) if(v[i][j] == 'Q') return false;

//         return true;
//     }

//     void solve(vector<string> &v, int col) {
//         if(col >= nl) {
//             ans.push_back(v);
//             return;
//         }
        
//         for(int i=0; i<nl; i++) {
//             if(check(v, i, col)) {
//                 v[i][col] = 'Q';
//                 solve(v, col+1);
//                 v[i][col] = '.';
//             }
//         }
//     }

//     vector<vector<string>> solveNQueens(int n) {
//         nl = n;
//         vector<string> v(nl, string(nl, '.'));
//         solve(v, 0);
//         return ans;
//     }
// };