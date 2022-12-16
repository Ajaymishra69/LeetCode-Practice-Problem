class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int>st1,st2;
    //int top;
    void push(int x) {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        
    }
    
    int pop() {
        int l = st1.top();
        st1.pop();
        return l;
        
        
    }
    
    int peek() {
        int l = st1.top();
        return l;
        
    }
    
    bool empty() {
        if(st1.empty())
            return true;
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */