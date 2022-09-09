class BrowserHistory {
public:
    string stack[5005];
    int i , j;
    BrowserHistory(string homepage) {
        stack[i = j = 0] = homepage;
    }
    
    void visit(string url) {
        stack[j = ++i] = url;
    }
    
    string back(int steps) {
        return stack[i = max(0 , i - steps)];
    }
    
    string forward(int steps) {
        return stack[i = min(j , i + steps)];
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
