int Solution::maxp3(vector<int> &A) {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    //remember the maximum product of three numbers can be product of first 3 greatest numbers
    //or the product of 2 negative values with the greatest absolute value and the greatest positive number
    if(A.size() < 3)
    return 0;
    if(A.size() == 3)
    return A[0]*A[1]*A[2];
    int max1 = INT_MIN, max2 = INT_MIN;
    int maxind1 = -1, maxind2 = -1;
    int maxP = INT_MIN;
    sort(A.begin(),A.end());
    reverse(A.begin(),A.end());
    int prod = A[0]*A[1]*A[2];
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] < 0 && abs(A[i]) > max1)
        {
            max1 = A[i];
            maxind1 = i;
        }
    }
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] < 0 && maxind1 != i && abs(A[i]) > max2)
        {
            max2 = A[i];
            maxind2 = i;
        }
    }
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] > maxP)
        maxP = A[i];
    }
    int res = max(prod, maxP*max1*max2);
    return res;
}
