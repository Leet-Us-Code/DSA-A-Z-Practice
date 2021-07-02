#include<bits/stdc++.h>
using namespace std;

int badness(vector<pair<string,int> > teams){
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<pair<int, string>> ranklist; 
    for(int i = 0; i < teams.size(); i++)
    {
        ranklist.push_back(make_pair(teams[i].second, teams[i].first));
    }
    sort(ranklist.begin(), ranklist.end());
    int score = 0;
    for(int i = 0; i < ranklist.size(); i++)
    {
        score += abs((i+1) - ranklist[i].first);
    }
    return score;
}
