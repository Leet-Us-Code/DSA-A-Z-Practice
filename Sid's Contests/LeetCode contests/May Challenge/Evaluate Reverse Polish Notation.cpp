class Solution {
public:
    int perform(int x, int y, string s)
    {
        if(s == "+")
            return x + y;
        else if(s == "*")
            return x*y;
        else if(s == "/")
            return y/x;
        else
            return y-x;
    }
    int evalRPN(vector<string>& tokens) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        stack<int> operands; 
        for(string s : tokens)
        {
            if(s == "+" || s == "-" || s == "/" || s == "*")
            {
                int x = operands.top();
                operands.pop();
                int y = operands.top();
                operands.pop();
                int z = perform(x, y, s);
                operands.push(z);
            }
            else 
            {
                int num = stoi(s);
                operands.push(num);
            }
        }
        return operands.top();
    }
};
