class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<int> res; // this is the merged array 
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] > nums2[j])
            {
                res.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i] < nums2[j])
            {
                res.push_back(nums1[i]);
                i++;
            }
            else
            {
                res.push_back(nums1[i]);
                res.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while(i < nums1.size())
        {
            res.push_back(nums1[i]);
            i++; 
        }
        while(j < nums2.size())
        {
            res.push_back(nums2[j]);
            j++;
        }
        double x = 0;
        int ind;
        if(res.size()%2 == 0)
        {
            int m, n;
            m = (res.size())/2;
            n = m-1;
            x = (double)(res[m] + res[n])/2;
        }
        else
        {
            int m;
            m = (int)(res.size())/2;
            x = res[m];
        }
        return x;
    }
};
