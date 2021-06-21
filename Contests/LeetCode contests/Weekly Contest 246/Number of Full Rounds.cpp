class Solution {
public:
    int stoiV1(string str)
    {
        int res = 0;
        int temp = 0;
        for (int i = 0; i < str.length(); i++) {

            temp = temp * 10 + (str[i] - '0');
        }
        return temp;
    }
    int numberOfRounds(string startTime, string finishTime) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        string starth = startTime.substr(0, 2);
        string endh = finishTime.substr(0, 2);
        string startm = startTime.substr(3, 2);
        string endm = finishTime.substr(3, 2);
        int startHour = stoiV1(starth);
        int endHour = stoiV1(endh);
        int startMin = stoiV1(startm);
        int endMin = stoiV1(endm);
        int res = (endHour - startHour)*4 + 96 + ((endMin/15) - ((startMin + 14)/15));
        return res%96;
    }
};
