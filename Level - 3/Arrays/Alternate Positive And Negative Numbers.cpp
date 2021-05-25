class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARYANA
	    vector<int> pos, neg;
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] >= 0)
	        {
	            pos.push_back(arr[i]);
	        }
	        else 
	        {
	            neg.push_back(arr[i]);
	        }
	    }
	    int k = 0;
	    int posInd = 0, negInd = 0;
	    while(posInd < pos.size() && negInd < neg.size())
	    {
	        if(k % 2 == 0)
	        {
	            arr[k] = pos[posInd];
	            k++;
	            posInd++;
	        }
	        else
	        {
	            arr[k] = neg[negInd];
	            k++;
	            negInd++;
	        }
	    }
	    while(posInd < pos.size())
	    {
	        arr[k] = pos[posInd];
	        k++;
	        posInd++;
	    }
	    while(negInd < neg.size())
	    {
	        arr[k] = neg[negInd];
	        k++;
	        negInd++;
	    }
	}
};
