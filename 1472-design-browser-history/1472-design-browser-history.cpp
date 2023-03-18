class BrowserHistory {
public:
    vector<string>s;
    int current;
    BrowserHistory(string hm) {
        s.push_back(hm);
        current=0;
    }
    
    void visit(string url) {
        s.erase(s.begin()+current+1,s.end());
        s.push_back(url);
        current++;
    }
    
    string back(int steps) {
        current = max(0,current-steps);
        return s[current];
    }
    
    string forward(int steps) {
        int n = s.size()-1;
        current = min(n,current+steps);
        return s[current];
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */