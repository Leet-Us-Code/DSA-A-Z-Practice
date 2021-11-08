// Hari

string multiply(string num1, string num2) {
        // fast
        ios_base::sync_with_stdio(false);
        int m = num1.size(), n = num2.size();
        int resLen = m+n; // max len for multiplication product
        vector<int> res(resLen, 0);
        // sanity check
        if(num1 == "0" || num2 == "0") return "0"; // mul with 0 = 0
        
        // traverse both nums from back and mul each digit w each other. 
        // (m*n multiplications)
        
        for(int i = m-1; i>=0; i--){
            for(int j = n-1; j>=0; j--){
                 res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                // res[i+j+1] last position of res available
                res[i + j] += res[i + j + 1] / 10;
                // prev pos of last pos has the carry
                // last pos of res gets the modded result into it
                res[i + j + 1] %= 10;
            }
        }
        
        // we have to form final string from res. also, we should ignore all the
        // leading zeros 
        int i = 0;
        string finRes = "";
        while(res[i] == 0) i++;
        while(i < res.size()) finRes += to_string(res[i++]); // non zero numbers concatenated
        
        return finRes;
        
    }
