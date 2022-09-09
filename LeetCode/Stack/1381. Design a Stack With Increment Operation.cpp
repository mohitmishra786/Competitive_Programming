class CustomStack {
    

public:
    
    vector<int> ans;
    int max_size;
    CustomStack(int maxSize) {
        max_size = maxSize;
    }
    
    void push(int x) {
        if(ans.size() < max_size) ans.push_back(x);
    }
    
    int pop() {
        if(ans.size() == 0) return -1;
        int sol = ans.back();
        ans.pop_back();
        return sol;
    }
    
    void increment(int k, int val) {
        int x = k;
        if(ans.size() < k) x = ans.size();
        for(int i = 0 ; i < x ; i++){
            ans[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
