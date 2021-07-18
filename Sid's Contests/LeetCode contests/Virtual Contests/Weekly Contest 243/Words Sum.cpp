class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int convertToNum(string s)
    {
        int sum = 0;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            int x = s[i] - 'a';
            sum += (x)*pow(10, n-1-i);
        }
        cout << endl;
        return sum;
    }
    string convertToString(int num)
    {
        string s;
        while(num != 0)
        {
            int x = num%10;
            char ch = (char)(x + 'a');
            s.push_back(ch);
            num = num/10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int num1 = convertToNum(firstWord);
        int num2 = convertToNum(secondWord);
        int num3 = convertToNum(targetWord);
        if(num1 + num2 == num3)
            return true;
        return false;
    }
};
