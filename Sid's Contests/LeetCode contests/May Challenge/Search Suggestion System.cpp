class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<vector<string>> res;
        sort(products.begin(), products.end());
        string prefixw = "";
        auto it = products.begin();
        for(char ch : searchWord)
        {
            prefixw += ch;
            vector<string> temp;
            //find the prefix 
            it = lower_bound(it, products.end(), prefixw);
            //we can add only a maximum of 3 words with the same prefix 
            for(int i = 0; i < 3 && it+i != products.end(); i++)
            {
                string &s = *(it + i);
                if(s.find(prefixw)) 
                    break;
                temp.push_back(s);
            }
            res.push_back(temp);
        }
        return res;
    }
};
