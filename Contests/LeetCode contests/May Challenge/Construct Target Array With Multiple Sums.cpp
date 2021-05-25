class Solution {
public:
    bool isPossible(vector<int>& target) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        long int sum = 0; // total sum of the target array 
        long int maxVal = INT_MIN; //to find the maximum value in the target array in each iteration 
        int maxInd = -1;
        for(int i = 0; i < target.size(); i++)
        {
            //update sum 
            sum += target[i];
            //update max 
            if(target[i] > maxVal)
            {
                maxVal = target[i];
                maxInd = i;
            }
        }
        //this is the difference the maximum element should be reduced with to make the next iteration arrat have a sum equal to target[maxInd]
        long int dif = sum - maxVal;
        //some edge cases 
        if(maxVal == 1 || dif == 1)//if the maxval is 1 it indicates we have converted the target arrray to all 1's...if dif == 1 it means we can make it to all 1's with some number of steps(an optimization)
        {
            return true;
        }
        if(dif > maxVal || dif == 0 || maxVal%dif == 0)
            return false;
        target[maxInd] = target[maxInd]%dif;
        return isPossible(target);
    }
};
