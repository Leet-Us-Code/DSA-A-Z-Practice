class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    //OM GAN GANAPATHAYE NAMO NAMAH 
    //JAI SHRI RAM 
    //JAI BAJRANGBALI 
    //AMME NARAYANA, DEVI NARAYANA, LAKSHMI NARAYANA, BHADRE NARAYANA
    struct edge
    {
        int node; 
        int weight;
    };
    struct compareWeight
    {
        bool operator()(edge const &e1, edge const &e2)
        {
            return e1.weight < e2.weight;
        }
    };
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int src)
    {
        // Code here
        priority_queue<edge, vector<edge>, compareWeight> pq;
        pq.push({src, 0});
        vector<bool> visited(v, false);
        visited[src] = true;
        vector<int> dist(v, INT_MAX);
        dist[src] = 0;
        while(!pq.empty())
        {
            int cur = pq.top().node;
            int wt = pq.top().weight; 
            pq.pop();
            for(int i = 0; i < adj[cur].size(); i++)
            {
                int node = adj[cur][i][0];
                int weight = adj[cur][i][1];
                if(dist[node] > dist[cur] + weight)
                {
                    dist[node] = dist[cur] + weight;
                    pq.push({node, dist[node]});
                }
            }
        }
        return dist;
    }
};
