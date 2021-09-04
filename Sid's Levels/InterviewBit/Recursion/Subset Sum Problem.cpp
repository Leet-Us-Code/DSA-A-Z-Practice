class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        if(sum == 0)
        return true;
        if(N == 0)
        return false;
        bool x = isSubsetSum(N-1, arr, sum);
        bool y = isSubsetSum(N-1, arr, sum-arr[N-1]);
        return x|y;
    }
};
