class Solution {
public:
    void marki(vector<vector<int>>& mat,int n,int i){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=0)
                mat[i][j]=-69;
        }
    }
    void markj(vector<vector<int>>& mat,int n,int j){
        for(int i=0;i<n;i++){
            if(mat[i][j]!=0)
                mat[i][j]=-69;
        }
    }
    void setZeroes(vector<vector<int>>& mat) {
        //unordered_map<int,int>mp;
        int n = mat.size(); //col
        int m = mat[0].size(); //row
        //cout<< n<<m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    marki(mat,m,i);
                    markj(mat,n,j);
                }     
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(mat[i][j]==-69)
                   mat[i][j]=0;
            }
        }
    }
};