class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        //OM GAN GANAPATHAYE NAMO NAMAH 
        //JAI SHRI RAM 
        //JAI BAJRANGBALI 
        //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
        int v = graph.size();
        bool visited[100000];
        for(int i = 0; i < v; i++)
        {
            visited[i] = false;
        }
        int level[1000000] = {0};
        for(int i= 0; i < v; i++)
        {
            if(!visited[i])
            {
                level[i] = 0;
                queue<int> q;
                q.push(i);
                visited[i] = true;
                while(!q.empty())
                {
                    int parent = q.front();
                    q.pop();
                    for(int child : graph[parent])
                    {
                        if(visited[child] == false)
                        {
                            visited[child] = true;
                            level[child] = level[parent] + 1;
                            q.push(child);
                        }
                        else if(level[parent] == level[child])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
