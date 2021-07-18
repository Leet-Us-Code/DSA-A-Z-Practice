int Solution::mice(vector<int> &A, vector<int> &B) {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int max = INT_MIN;
    for(int i = 0; i < A.size(); i++)
    {
        if(max < abs(A[i] - B[i]))
        max = abs(A[i] - B[i]);
    }
    return max;
}
