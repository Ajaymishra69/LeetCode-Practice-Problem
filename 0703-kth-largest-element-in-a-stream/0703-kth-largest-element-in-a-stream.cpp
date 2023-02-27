class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int ki=0;
    KthLargest(int k, vector<int>& nums) {
        for(auto i:nums){
            pq.push(i);
        }
        ki=k;
    }
    
    int add(int val) {
        pq.push(val);
        while(ki<pq.size()){
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */