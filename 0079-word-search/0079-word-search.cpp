class Solution 
{
public:
    bool search(int index, int i, int j ,vector<vector<char>>& board, string word)
    {
      if(index == word.size())
      {
          return true;
      }
      if(i<0 or j<0 or i>=board.size() or j>=board[0].size())
      {
          return false;
      }
      bool ans = false;
     if(word[index] == board[i][j])
     {
         board[i][j] = '*';
         
         ans = search(index+1,i+1,j,board,word) or 
               search(index+1,i,j+1,board,word) or
               search(index+1,i-1,j,board,word) or
               search(index+1,i,j-1,board,word);
         
        board[i][j] = word[index];
     }
        
     return ans;   
    }
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
      int m = board[0].size();
      int n = board.size();
      int index = 0; 
      bool ans = false;
     
      for(int i=0; i<n ;i++)
      {
          for(int j = 0; j<m; j++)
          {
              if(word[index] == board[i][j])
              {
                if(search(index,i,j,board,word))  
                {
                    return true;
                }
              }
          }
      }
        return ans;
    }
};
    
//    bool find(int i,int j,int index,vector<vector<char>>& board, string word)
//    {
//        if(index==word.size())
//            return true;
//        if(i<0||j<0 ||i>=board.size()||j>=board.size())
//            return false;
//        bool ans = false;
//        if(word[index]==board[i][j])
//        {
//            board[i][j]='#';
//                ans = find(i+1,j,index+1,board,word)or
//                      find(i,j+1,index+1,board,word)or
//                      find(i-1,j,index+1,board,word)or
//                      find(i,j-1,index+1,board,word);
//            board[i][j]=word[index];
//        }
//        return ans;
//    }
    
//     bool exist(vector<vector<char>>& board, string word) 
//     {
//         bool ans = false;
//         int index=0;
//         for(int i=0; i<board.size(); i++)
//         {
//             for(int j=0; j<board[0].size(); j++)
//             {
//                 if(board[i][j] == word[index])
//                     if(find(i, j, index, board, word))
//                         return true;
//             }
//         }
//         return ans;
//     }
// };