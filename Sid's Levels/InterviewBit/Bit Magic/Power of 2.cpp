class Solution{
    public:
    // Function to check if given number n is a power of two.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //JAI SHRI RAM 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int countBits(long long int n)
    {
        int cntr = 0;
        while(n)
        {
            cntr++;
            n = n&(n-1);
        }
        return cntr;
    }
    bool isPowerofTwo(long long n){
        
        // Your code here    
        int bits = countBits(n);
        if(bits == 1)
        return true;
        return false;
    }
};
