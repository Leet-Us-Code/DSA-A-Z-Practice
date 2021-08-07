//Recursive solution 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool wordBreak(string s, vector<string>& wordDict) {
        if(s.length() == 0)
            return true; 
        for(int i = 0; i < s.length(); i++)
        {
            //break the string 
            string s1 = s.substr(0, i+1);
            string s2 = s.substr(i+1);
            vector<string> :: iterator it = find(wordDict.begin(), wordDict.end(), s1);
            if(it != wordDict.end())
            {
                if(wordBreak(s2, wordDict))
                    return true;
            }
        }
        return false;
    }
};

//DP (tabulation)
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> wb(n+1, false); // wb[i] -> checks if s[0..i-1] can be broken correctly 
        if(n == 0)
            return true;
        for(int i = 1; i <= n; i++)
        {
            //partitioning  
            string s1 = s.substr(0, i);
            //checking if s1 exists or not 
            vector<string> :: iterator it = find(wordDict.begin(), wordDict.end(), s1);
            if(wb[i] == false && it != wordDict.end())
                wb[i] = true;
            if(wb[i] == true)
            {
                if(i == n)
                    return true;
                for(int j = i+1; j <= n; j++)
                {
                    //remaining string partition 
                    string s2 = s.substr(i, j-i);
                    vector<string> :: iterator it1 = find(wordDict.begin(), wordDict.end(), s2);
                    if(wb[j] == false && it1 != wordDict.end())
                        wb[j] = true;
                    if(j == n && wb[j] == true)
                        return true;
                }
            }
        }
        return false;
        
    }
};
