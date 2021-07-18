//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
#include<bits/stdc++.h>
using namespace std;
void printAb(string s, string answerSoFar, int count, int i)
{
    if(i == s.length())
    {
        if(count == 0)//if the count is zero we need not include the count in the answer 
        cout << answerSoFar << endl;
        else//we need to include the count after answer so far 
        {
            string cntString = to_string(count);
            cout << answerSoFar + cntString << endl;
        }
        return;
    }
    //including the current index 
    //again if count is zero dont include the count 
    if(count > 0)
    {
        
        printAb(s, answerSoFar + to_string(count) + s[i], 0, i+1);//since we are including we are making the count back to zero
        
    }
    else //dont include the count with the answerSoFar
    {
        
        printAb(s, answerSoFar + s[i], 0, i+1);
    }
    //dont include the character which means we have to increase the count
    string s1;
    s1 = answerSoFar;
    printAb(s, answerSoFar, count+1, i+1);
}
int main()
{
    string s;
    cin >> s;
    string res = "";
    printAb(s,res,0,0);
}
