class Solution {
public:
    bool compare(string word1, string word2, string order)
    {
        int i = 0, j = 0; 
        int flag = 0;
        int n = word1.length();
        int m = word2.length();
        while(i < n && j < m)
        {
            if(word1[i] == word2[j])
            {
                i++;
                j++;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        //if flag == 1 then it means that the letters are same 
        if(flag == 0)
        {
            if(word1.length() > word2.length())
                return true;// word1 is greater
            else
                return false;//word2 is greater or equal
        }
        else 
        {
            char ch1 = word1[i];
            char ch2 = word2[j];
            char first;
            for(int i = 0; i < order.length(); i++)
            {
                if(order[i] == ch1)
                {
                    first = ch1;
                    break;
                }
                if(order[i] == ch2)
                {
                    first = ch2;
                    break;
                }
            }
            //if ch1 is the first then word1 is smaller 
            if(first == ch1)
                return false;
            else
                return true;
        }
        
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i = 0; i < words.size() - 1; i++)
        {
            for(int j = i+1; j < words.size(); j++)
            {
                if(compare(words[i], words[j], order))
                    return false;
            }
        }
        return true;
    }
};
