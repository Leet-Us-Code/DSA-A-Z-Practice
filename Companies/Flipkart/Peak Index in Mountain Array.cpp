// Hari

// Method - 1 (N)

int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        int i = 0;
        for(; i<arr.size()-1; i++){
            if(arr[i] > arr[i+1]) break;
        }
        return i;
    }

// Method - 2 (logN)

int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        int l = 0, r = arr.size()-1;
        
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[mid] < arr[mid+1]) l = mid+1; // mountain is on right side 
            else r = mid-1;            
        }
        return l;
    }
