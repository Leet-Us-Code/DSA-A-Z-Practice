class Solution {
public:
    int merge(vector<int> &A, int l, int mid, int r)
    {
        vector<int> left, right;
        int leftSize = mid - l + 1;
        int rightSize = r - mid;
        for(int i = 0; i < leftSize; i++)
        {
            left.push_back(A[l + i]);
        }
        for(int i = 0; i < rightSize; i++)
        {
            right.push_back(A[mid + 1 + i]);
        }
        int i = 0, j = 0;
        int inversions = 0;
        int k = l;
        while(i < leftSize && j < rightSize)
        {
            if(left[i] > right[j])
            {
                inversions += (leftSize - i);
                A[k] = right[j];
                k++;
                j++;
            }
            else
            {
                A[k] = left[i];
                k++;
                i++;
            }   
        
        }
        while(i < leftSize)
        {
            A[k] = left[i];
            i++;
            k++;
        }
        while(j < rightSize)
        {
            A[k] = right[j];
            j++;
            k++;
        }
        return inversions;
    }
    int globalInversions(vector<int> &A, int l, int r)
    {
        int x = 0 ;
        if(l < r)
        {
            int mid = (l + r)/2;
            x += globalInversions(A, l, mid);
            x += globalInversions(A, mid + 1, r);
            x += merge(A, l, mid, r);
        }
        return x;
    }
    int localInversions(vector<int> A, int l, int r)
    {
        int count = 0;
        for(int i = l; i < r; i++)
        {
            if(A[i] > A[i+1])
                count++;
        }
        return count;
    }
    bool isIdealPermutation(vector<int>& A) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int l = 0;
        int r = A.size() - 1;
        int y = localInversions(A, l, r);
        int x = globalInversions(A, l, r);
        if(x == y)
            return true;
        else
            return false;
    }
};
