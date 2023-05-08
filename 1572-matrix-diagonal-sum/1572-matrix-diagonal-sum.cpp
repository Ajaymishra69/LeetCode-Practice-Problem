class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j)
                    sum+=mat[i][j];
                if(i+j==m-1)
                    sum+=mat[i][j];
            }
        }
        if(m%2==0)
            return sum;
        return sum-mat[m/2][m/2];
    }
};