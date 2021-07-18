class MinStack {
public:
    /** initialize your data structure here. */
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    stack<long long int> s;
    long long int minEle = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            minEle = val;
            s.push(val);
        }
        else
        {
            if(minEle > val)
            {
                s.push(2*val - minEle);
                minEle = val;
            }
            else
            {
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top() > minEle)
            s.pop();
        else
        {
            minEle = 2*minEle - s.top();
            s.pop();
        }
    }
    
    int top() {
        if(s.top() > minEle)
            return (int)s.top();
        else
        {
            return (int)minEle;
        }
    }
    
    int getMin() {
        return (int)minEle;
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
