long long int merge(long long int arr[], long long int l, long long int mid, long long int r)
    {
        long long int cntr = 0;
        int leftSize = mid - l + 1;
        int rightSize = r - mid;
        long long int left[leftSize], right[rightSize];
        for(int i = 0; i < leftSize; i++)
        {
            left[i] = arr[l + i];
        }
        for(int i = 0; i < rightSize; i++)
        {
            right[i] = arr[mid + 1 + i];
        }
        int i = 0, j = 0, k = l;
        while(i < leftSize && j < rightSize)
        {
            if(left[i] > right[j])
            {
                cntr += (leftSize - i);
                arr[k++] = right[j++];
            }
            else
            {
                arr[k++] = left[i++];
            }
        }
        while(i < leftSize)
            arr[k++] = left[i++];
        while(j < rightSize)
            arr[k++] = right[j++];
        return cntr;
    }
    void divide(long long int arr[], long long int l, long long int r, long long int &cntr)
    {
        if(l < r)
        {
            long long int mid = (l + r)/2;
            divide(arr, l, mid, cntr);
            divide(arr, mid+1, r, cntr);
            cntr += merge(arr, l, mid, r);
        }
        return;
    }
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        long long int cntr = 0;
        divide(arr, 0, n-1, cntr);
        return cntr;
    }
