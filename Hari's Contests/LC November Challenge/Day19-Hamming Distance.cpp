// Hari

int hammingDistance(int x, int y) {
        // Method 1 
        // bitset converts number into its bits notation
        //return bitset<32>(x ^ y).count(); // in binary XOR of both, if either ONE of bits is 1 then result is 1. Count returns no. of 1s
        
        // Method - 2
        // fast
        ios_base::sync_with_stdio(false);
        int res = (x ^ y);
        int finalRes = 0;
        
        while(res > 0){
            // get the state (either 0 or 1) of ones digit by doing bitwise AND with 1
            finalRes += res & 1; // adds 1 if unit digit is 1, else 0
            res >>= 1; // right shift by 1 so tens digit becomes ones
        }
        return finalRes;
        
    }
