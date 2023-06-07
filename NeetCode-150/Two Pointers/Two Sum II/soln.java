class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] res = new int[2]; 
        int l = 0, r = numbers.length-1; 

        while(r >= l){
            if(numbers[r] + numbers[l] == target){
                res[0] = l + 1; 
                res[1] = r + 1; 
                return res;
            }
            else if(numbers[r] + numbers[l] > target)
                r--;
            else
                l++;
        }
        return res;
    }
}
