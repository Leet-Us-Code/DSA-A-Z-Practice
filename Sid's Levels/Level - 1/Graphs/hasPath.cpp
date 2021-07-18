bool hasPath(vector<int> adj[], int src, int dest, bool visited[])
{
  if(src == dest)
  return true;
  else
  {
    visited[src] = true;
    for(auto x : adj[src])
    {
      if(visited[x] == false)
      return hasPath(adj, x, dest, visited);
    }
    return false;
  }
}
