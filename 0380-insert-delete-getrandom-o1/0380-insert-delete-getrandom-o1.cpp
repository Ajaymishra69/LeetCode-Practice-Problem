class RandomizedSet {
public:
    //unordered_map<int,int>mp;
    set<int> st;
    vector<int> ans;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!st.count(val))        
        {
            st.insert(val);
           
            return true;
        }
        return false;
        
    }
    
    bool remove(int val) {
        if(st.count(val))      // check if val is not present in map then return false;
        {
            st.erase(val);
            return true;
        }
        return false;
        
        
    }
    
    int getRandom() {
        if(st.size()!=0)
        {
            return *next(st.begin(),rand()%st.size());
        }
        return 0; 
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */