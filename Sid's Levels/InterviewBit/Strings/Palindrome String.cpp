class Solution{
public:	
	
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	int isPlaindrome(string s)
	{
	    // Your code goes here
	    int n = s.length();
	    for(int i = 0; i < (n/2); i++)
	    {
	        if(s[i] != s[n-1-i])
	        return false;
	    }
	    return true;
	}

};
