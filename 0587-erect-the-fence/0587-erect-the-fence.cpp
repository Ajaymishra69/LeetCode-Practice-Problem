class Solution { // SOLVE USING CONVEX HULL ALGORITHM 
    
public: 
      int getRotate( vector<int>A , vector<int>B , vector<int>C)
      {
         return ((B[0]-A[0])*(C[1]-A[1])) - ((B[1]-A[1] )*(C[0]-A[0])) ;  
      }
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        
        if(trees.size() <= 3)
        {
            return trees ; 
        }
        
        sort( trees.begin() , trees.end()) ; 
        
        // UPPER CONVEX HULL 
        
        vector<vector<int>>ltrees ; 
        
         ltrees.push_back(trees[0]) ; 
         ltrees.push_back(trees[1]) ; 
        
        for( int i = 2 ; i < trees.size() ; i++)
        {
            int ls = ltrees.size() ; 
            
            while(ltrees.size() >= 2 && getRotate( ltrees[ls-2] , ltrees[ls-1] , trees[i]) > 0 )
           {
               ltrees.pop_back() ; 
               ls-- ; 
           }
         ltrees.push_back(trees[i]) ; 
        }
        
        // LOWER CONVEX HULL 
        
        vector<vector<int>>rTrees ; 
        
        rTrees.push_back(trees[trees.size()-1]) ; 
        rTrees.push_back(trees[trees.size()-2]) ; 
        
        for( int i = trees.size()-3 ; i >= 0 ; i--)
        {
            int rs = rTrees.size() ; 
            
            while(rTrees.size() >= 2 && getRotate(rTrees[rs-2] , rTrees[rs-1] , trees[i]) > 0)
            {
                rTrees.pop_back() ; 
                rs-- ; 
            }
            
            rTrees.push_back(trees[i]) ; 
        }
        
        // JOIN UPPER AND LOWER CONVEX HULL 
        
        for( int i = 0 ; i < rTrees.size() ; i++)
        {
            ltrees.push_back(rTrees[i]) ; 
        }
        
        // REMOVING UNIQUE ELEMENTS 
        
        sort(ltrees.begin() , ltrees.end()) ; 
        
        ltrees.erase(std::unique(ltrees.begin() , ltrees.end()),ltrees.end()) ; 
        
        
        return ltrees ;
        
        
    }
};