class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    MyStack() {
    }
    /** Push element x onto stack. */
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q1.size() > 1)
        {
            int x = q1.front();
            q1.pop();
            q2.push(x);
        }
        int res = q1.front();
        q1.pop();
        while(!q2.empty())
        {
            int x = q2.front();
            q2.pop();
            q1.push(x);
        }
        return res;
    }
    
    /** Get the top element. */
    int top() {
        while(q1.size() > 1)
        {
            int x = q1.front();
            q1.pop();
            q2.push(x);
        }
        int res = q1.front();
        q1.pop();
        q2.push(res);
        while(!q2.empty())
        {
            int x = q2.front();
            q2.pop();
            q1.push(x);
        }
        return res;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
