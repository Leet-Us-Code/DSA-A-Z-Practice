// Recursive 
class Solution {
	public:
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	int lcs(string s1, int m, string s2, int n)
	{
	    if(m == 0 || n == 0)
	    return 0;
	    else if(s1[m-1] == s2[n-1] && m-1 != n-1)
	    return lcs(s1, m-1, s2, n-1) + 1;
	    else 
	    return max(lcs(s1, m, s2, n-1), lcs(s1, m-1, s2, n));
	}
	int LongestRepeatingSubsequence(string str){
	    // Code here
	    int m = str.length();
	    return lcs(str, m, str, m);
	}

};

// DP (tabulation) 

class Solution {
	public:
	//OM GAN GANAPATHAYE NAMO NAMAH 
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LASKHMI NARAYANA, BHADRE NARAYANA
	int LongestRepeatingSubsequence(string str){
	    // Code here
	    int m = str.length();
	    int dp[m+1][m+1];
	    for(int i = 0; i <= m; i++)
	    {
	        for(int j = 0; j <= m; j++)
	        {
	            if(i == 0 || j == 0)
	            dp[i][j] = 0;
	            else if(str[i-1] == str[j-1] && i-1 != j-1)
	            dp[i][j] = dp[i-1][j-1] + 1;
	            else
	            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	        }
	    }
	    return dp[m][m];
	}
};
