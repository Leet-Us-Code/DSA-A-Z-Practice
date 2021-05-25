int Solution::majorityElement(const vector<int> &A) {
    int n;
    if(A.size()%2 == 0)
    n = (A.size())/2;
    else
    n = (A.size()/2) + 1;
    map<int, int> freq;
    for(int i = 0; i < A.size(); i++)
    freq[A[i]]++;
    int res = -1;
    for(int i = 0; i < A.size(); i++)
    {
        if(freq[A[i]] >= n)
        {
            res = A[i];
            break;
        }
    }
    return res;
}
