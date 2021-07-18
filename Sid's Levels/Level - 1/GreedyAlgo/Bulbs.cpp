int Solution::bulbs(vector<int> &A) {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    int c = 0;
    //edge case -> remove the initial ones 
    int j = 0;
    while(j < A.size() && A[j] == 1)
    {
        j++;
    }
    for(int i = j; i < A.size(); i++)
    {
        while(i < A.size() - 1 && A[i] == A[i+1])
        {
            i++;
        }
        c++;
    }
    return c;
}
