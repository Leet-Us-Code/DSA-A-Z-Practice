//OM GAN GANAPATHAYE NAMO NAMAH 
//JAI SHRI RAM 
//JAI BAJRANGBALI 
//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
class Pair{
    int ind; 
    int num;
    Pair(int num, int ind)
    {
        this.num = num;
        this.ind = ind;
    }
}
//comparator function 
class Compare{
    static void Compare(Pair arr[], int n)
    {
        Arrays.sort(arr, new Comparator<Pair>(){
            @Override public int compare(Pair p1, Pair p2)
            {
                return p1.num - p2.num;
            }
        });
    }
}
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        Pair[] a = new Pair[n];
        for(int i = 0; i < n; i++)
        {    
            Pair p = new Pair(nums[i], i);
            a[i] = p;
        }
        Compare obj = new Compare();
        obj.Compare(a, n);
        int l = 0, r = n - 1;
        int[] res = new int[2];
        while(r > l)
        {
            if(a[r].num + a[l].num == target)
            {
                res[0] = a[l].ind; 
                res[1] = a[r].ind; 
                break;
            }
            else if(a[r].num + a[l].num > target)
                r--;
            else
                l++;
        }
        return res;
    }
}
