// Recursive 
class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int editDistance(string word1, string word2, int m, int n)
    {
        if(m == 0)
            return n;
        if(n == 0)
            return m;
        if(word1[m-1] == word2[n-1])
            return editDistance(word1, word2, m-1, n-1);
        int replace = editDistance(word1, word2, m-1, n-1) + 1;
        int delete1 = editDistance(word1, word2, m-1, n) + 1;
        int add = editDistance(word1, word2, m, n-1) + 1;
        return min({replace, delete1, add});
    }
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        return editDistance(word1, word2, m, n);
    }
};
