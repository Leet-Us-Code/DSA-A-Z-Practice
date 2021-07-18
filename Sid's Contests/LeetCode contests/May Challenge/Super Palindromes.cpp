class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool isPalindrome(long x){
        if(x == reverse(x))
            return true;
        else
            return false;
    }
    
    long reverse(long x ){
        long ans = 0;
        while(x > 0){
            ans = 10 * ans + x % 10;
            x /= 10;
        }
        return ans;
    }
    int superpalindromesInRange(string left, string right) {
        long l = stol(left) , r = stol(right);
        
        int  cntr = 0;
        string s = "";
        for(int i = 1 ; i < 100000 ; i++){
            s = to_string(i);
            for(int j = s.length() - 1; j >= 0 ; j--){
                s.push_back(s[j]);
            }
            long n = stol(s);
            n *= n;
            if(n > r) break;
            if(n >= l && isPalindrome(n)) cntr++;
        }
        for(int i = 1 ; i < 100000 ; i++){
            s = to_string(i);
            for(int j = s.length() - 2; j >= 0 ; j--){
                s.push_back(s[j]);
            }
            long n = stol(s);
            n *= n;
            if(n > r) break;
            if(n >= l && isPalindrome(n)) cntr++;
        }
        
        return cntr;
    }
    
    
};
