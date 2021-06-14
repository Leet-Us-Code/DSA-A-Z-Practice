class Solution {
public:
    bool makeEqual(vector<string>& words) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int freq[26] = {0};
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = 0; j < words[i].length(); j++)
            {
                freq[words[i][j] - 'a']++;
            }
        }
        int n = words.size();
        for(int i = 0; i < 26; i++)
        {
            if(freq[i]%n != 0)
                return false;
        }
        return true;
    }
};
