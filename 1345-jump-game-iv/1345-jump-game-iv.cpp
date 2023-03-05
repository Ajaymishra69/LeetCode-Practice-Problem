class Solution {
public:
    int minJumps(vector<int>& arr) {
//************ Declarations of variable********************//
        int steps = 0;
        unordered_map<int,vector<int>>mp;
        int n = arr.size();
        vector<bool>vis(n);
        vis[0]=true;
        queue<int>q;
        q.push(0);
        set<int>st;
//*******************Logic*********************************//       
        for(auto i:arr)
            st.insert(i);
        
        int m = st.size();
        
        for(int i=0;i<n;i++)
            mp[arr[i]].push_back(i);
        
        
        if(n!=m){
            while(!q.empty()){
                for(int ii = q.size();ii>0;--ii)
                {
                    int i = q.front();
                    q.pop();
                if (i == n - 1) 
                    return steps; // Reached to last index
                vector<int>& next = mp[arr[i]];
                next.push_back(i - 1);
                next.push_back(i + 1);
                for (int j : next) {
                    if (j >= 0 && j < n && !vis[j]) {
                        vis[j] = true;
                        q.push(j);
                    }
                }
                mp[arr[i]].clear(); // avoid later lookup indicesOfValue arr[i]
            }
            steps++;
        }  
        }
        else
            steps=n-1;
        return steps;
    }
};