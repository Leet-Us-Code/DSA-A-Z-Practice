int Solution::solve(vector<vector<int> > &A) {
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    vector<int> arr;
    vector<int> dep;
    for(int i = 0; i < A.size(); i++)
    {
        arr.push_back(A[i][0]);
        dep.push_back(A[i][1]);
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i = 0, j = 0;
    int room = 0;
    int max = INT_MIN;
    while(i < arr.size() && j < dep.size())
    {
        if(arr[i] < dep[j])
        {
            room++;
            i++;
            
        }
        else
        {
            j++;
            room--;
        }
        if(max < room)
        max = room;
    }
    return max;
}
