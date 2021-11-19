class Solution {
    static Long gcd(Long a, Long b)
    {
        if(b == 0)
        return a; 
        return gcd(b, a%b);
    }
    static Long[] lcmAndGcd(Long a , Long b) {
        // code here
        Long[] arr = new Long[2];
        Long hcf = gcd(a, b);
        Long lcm = a*b/hcf; 
        arr[0] = lcm;
        arr[1] = hcf;
        return arr;
    }
};
