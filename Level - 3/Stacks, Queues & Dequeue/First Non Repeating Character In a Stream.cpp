class Solution {
	public:
	//OM GAN GANAPATHAYE NAMO NAMAH
	//JAI SHRI RAM 
	//JAI BAJRANGBALI 
	//AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	string FirstNonRepeating(string s){
	    // Code here
	    queue<char> q;
	    int freq[26] = {0};
	    string res;
	    for(char ch : s)
	    {
	        int ind = ch - 'a';
	        freq[ind]++;
	        q.push(ch);
	        while(!q.empty() && freq[q.front()-'a'] > 1)
	        {
	            q.pop();
	        }
	        if(q.empty())
	        {
	            res.push_back('#');
	        }
	        else
	        {
	            res.push_back(q.front());
	        }
	    }
	    return res;
	}

};
