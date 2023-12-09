// Hari

class MinStack {
public:
    vector<pair<int, int>> arr;
    MinStack() {
        
    }
    
    void push(int val) {
        int minVal = INT_MAX;
        if (arr.empty()) {
            minVal = val;
        } else {
            minVal = min(val, getMin());
        }
        arr.emplace_back(val, minVal);
    }
    
    void pop() {
        arr.pop_back();
    }
    
    int top() {
        return arr.back().first;
    }
    
    int getMin() {
        return arr.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
