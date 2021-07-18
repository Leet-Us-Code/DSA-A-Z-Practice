class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void computeRight(vector<int> a, vector<int> &nse)
    {
        int n = a.size();
        stack<int> s;
        for(int i = 0; i < n; i++)
        {
            if(s.empty())
            {
                s.push(i);
            }
            while(!s.empty() && a[s.top()] > a[i])
            {
                nse[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            nse[s.top()] = n;
            s.pop();
        }
    }
    void computeLeft(vector<int> a, vector<int> &nse)
    {
        int n = a.size();
        stack<int> s;
        for(int i = n-1; i >= 0; i--)
        {
            if(s.empty())
            {
                s.push(i);
            }
            while(!s.empty() && a[s.top()] > a[i])
            {
                nse[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            nse[s.top()] = -1;
            s.pop();
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nsel(n), nser(n);
        computeRight(heights, nser);
        // for(int i = 0; i < nser.size(); i++)
        //     cout << nser[i] << " ";
        // return 0;
        computeLeft(heights, nsel);
        // for(int i = 0; i < nsel.size(); i++)
        //     cout << nsel[i] << " ";
        // return 0;
        int maxArea = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int area = heights[i] * (nser[i] - nsel[i] - 1);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
