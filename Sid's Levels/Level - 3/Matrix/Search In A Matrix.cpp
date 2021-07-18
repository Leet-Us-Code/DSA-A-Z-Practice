//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    //OM GAN GANAPATHAYE NAMO NAMAH 
	    //JAI SHRI RAM 
	    //JAI BAJRANGBALI 
	    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
	    int i = 0, j = M - 1;
	    while(i < N && j >= 0)
	    {
	        if(mat[i][j] == X)
	        {
	            return 1;
	        }
	        else if(mat[i][j] > X)
	        {
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    return 0;
	}
};
