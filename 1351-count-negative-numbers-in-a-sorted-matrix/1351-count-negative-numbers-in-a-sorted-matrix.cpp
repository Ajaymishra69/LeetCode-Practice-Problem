class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        /*int flag =0;
        int i= grid.size()-1;
        int j= grid[0].size()-1;
        for(int m=0;m<=i;m++)
        {
            for(int n=0;n<=j;n++)
            {
                if(grid[m][n]<0)
                    flag++;             // Brute Force approach
            }
        }
        return flag;
        
    }*/
         int neg = 0, m = grid.size(), n = grid[0].size();
        for(int i = 0, r = n-1; i < m; i++){
            int l = 0;
            while(l <= r){
                int mi = l + (r-l)/2;
                if(grid[i][mi] < 0)
                    r = mi-1;
                else
                    l = mi+1;
            }
            neg += n-l;
        }
        return neg;
    }
};