class Solution {
public:
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    void right(vector<int> heights, vector<int> &sr)
    {
        stack<int> s;
        int r[100000];
        for(int i = 0; i < heights.size(); i++)
        {
            if(s.empty())
            {
                s.push(i);
            }
            else
            {
                if(heights[s.top()] > heights[i])
                {
                    while(!s.empty() && heights[s.top()] > heights[i])
                    {
                        r[s.top()] = i;
                        s.pop();
                    }
                    s.push(i);
                }
                else 
                {
                    s.push(i);
                }
            }
        }
        while(!s.empty())
        {
            r[s.top()] = heights.size();
            s.pop();
        }
        for(int i = 0; i < heights.size(); i++)
        {
            sr.push_back(r[i]);
        }
    }
    void left(vector<int> heights, vector<int> &sl)
    {
        stack<int> s;
        int r[100000];
        for(int i = heights.size()-1; i >= 0; i--)
        {
            if(s.empty())
            {
                s.push(i);
            }
            else
            {
                if(heights[s.top()] > heights[i])
                {
                    while(!s.empty() && heights[s.top()] > heights[i])
                    {
                        r[s.top()] = i;
                        s.pop();
                    }
                    s.push(i);
                }
                else 
                {
                    s.push(i);
                }
            }
        }
        while(!s.empty())
        {
            r[s.top()] = -1;
            s.pop();
        }
        for(int i = 0; i < heights.size(); i++)
        {
            sl.push_back(r[i]);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> sl;
        vector<int> sr;
        right(heights, sr);
        left(heights, sl);
        int maxArea = INT_MIN;
        for(int i = 0; i < heights.size(); i++)
        {
            int area = heights[i]*(sr[i] - sl[i] - 1);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
