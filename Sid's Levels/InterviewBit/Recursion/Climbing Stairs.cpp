class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2)
            return n;
        else
            return climbStairs(n-1) + climbStairs(n-2);
    }
};
