class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //JAI SHRI RAM  
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        long long int sum = 0;
        int n = chalk.size();
        for(int i = 0; i < n; i++)
        {
            sum += chalk[i];
        }
        int remChalk = k%sum; 
        if(remChalk == 0)
            return 0;
        else 
        {
            int x = remChalk;
            int ind = 0;
            for(int i = 0; i < n; i++)
            {
                x = x - chalk[i];
                if(x < 0)
                    return i;
            }
            
            return 0;
        }
    }
};
