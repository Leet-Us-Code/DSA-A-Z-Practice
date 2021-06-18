
#include<bits/stdc++.h>
using namespace std;
string stoiV1(int x)
{
    //24 -> 2, 4 
    if(x == 0)
    return "0";
    string res;
    while(x != 0)
    {
        int y = x%10;
        char ch = (char)(y + '0');
        res.push_back(ch);
        x = x/10;
    }
    reverse(res.begin(), res.end());
    return res;
}
string convert_to_digital_time(int minutes){
    //complete this function
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int hours = minutes/60;
    int mins = minutes%60;
    string h, m;
    h = stoiV1(hours);
    m = stoiV1(mins);
    string res = "";
    res += h;
    if(m.length() < 2)
    res += ":0" + m;
    else
    res += ":" + m;
    return res;
    
}
