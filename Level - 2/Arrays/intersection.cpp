class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //OM GAN GANAPATHAYE NAMO NAMAH
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int i = 0;
        int j = 0;
        vector<int> inter;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while(i < nums1.size() && j < nums2.size())
        {
            while(i < nums1.size() - 1 && nums1[i] == nums1[i+1])
                i++;
            while(j < nums2.size() -1 && nums2[j] == nums2[j+1])
                j++;
            if(nums1[i] == nums2[j])
            {
                inter.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return inter;
    }
};
