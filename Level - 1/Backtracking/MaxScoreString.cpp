class Solution {
public:
    int helper(vector<string> words, int freq[], vector<int> score, int &cur, int ind)
    {
        if(ind == words.size())
            return cur;
        //not including 
        int notIncludedScore = helper(words, freq, score, cur, ind+1);
        //including 
        string word = words[ind];
        bool flag = true;
        int rscore = 0;
        for(int i = 0; i < word.length(); i++)
        {
            if(freq[word[i] - 'a'] == 0)
            {
                flag = false;
            }
            //not putting else as then we wont be able to backtrack smoothly by increasing the frequencies
                freq[word[i] - 'a']--;
                cur += score[word[i] - 'a'];
                rscore += score[word[i] - 'a'];
        }
        int includedScore = 0;
        if(flag)
        includedScore = helper(words, freq, score, cur, ind+1);
        //backtrack 
        for(int i = 0; i < word.length(); i++)
        {
            freq[word[i] - 'a']++;
        }
        cur = cur - rscore;
        return max(includedScore, notIncludedScore);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int freq[26] = {0};
        for(int i = 0; i < letters.size(); i++)
        {
            freq[letters[i] - 'a']++;
        }
        int s = 0;
        return helper(words, freq, score, s, 0);
    }
};
