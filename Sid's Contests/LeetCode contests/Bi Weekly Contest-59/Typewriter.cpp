class Solution {
public:
    int dif(char ch1, char ch2)
    {
        int ac, c;
        if(ch1 < ch2)
        {
            c = (ch2 - ch1);
            ac = 26 - (c%26);
        }
        else 
        {
            ac = (ch1 - ch2);
            c = 26 - (ac%26);
        }
        return min(ac, c);
    }
    int minTimeToType(string word) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        if(word.length() == 0)
            return 0;
        int score = dif('a', word[0]) + 1;
        for(int i = 0; i < word.length()-1; i++)
        {
            score += dif(word[i], word[i+1]);
            score++;
        }
        return score;
    }
};
