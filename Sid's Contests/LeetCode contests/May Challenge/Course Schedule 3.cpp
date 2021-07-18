class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        vector<pair<int, int>> x;
        for(int i = 0; i < courses.size(); i++)
        {
            int duration = courses[i][0];
            int deadline = courses[i][1];
            x.push_back(make_pair(deadline, duration));
        }
        sort(x.begin(), x.end());
        //max heap 
        priority_queue<int> p; // this is to store the durations and offer the course with maximum duration in case we want to remove a course to add an extra course 
        int days = 0; 
        for(int i = 0; i < x.size(); i++)
        {
            //check if we can accept the course -> if we can then just add it to our results 
            int deadline = x[i].first;
            int duration = x[i].second;
            if(days + duration <= deadline)
            {
                //add the duration in the heap 
                p.push(duration);
                //increment our days
                days = days + duration;
            }
            else 
            {
                //check if we can swap -> that is time after swapping < time before swapping 
                if(p.size() > 0 && p.top() > duration)
                {
                    days = days - p.top();
                    p.pop();
                    days = days + duration;
                    p.push(duration);
                }
            }
            
        }
        return p.size();
    }
};
