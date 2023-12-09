void dfsT(int node,vector<int>&dfs,vector<int>& vis,vector<int>adj[]){
      vis[node]=1;
      dfs.push_back(node);
      
      for(auto nei:adj[node]){
          if(!vis[nei]){
              dfsT(nei,dfs,vis,adj);
          }
      }
  }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>dfs;
        vector<int>vis(V);
        dfsT(0,dfs,vis,adj);
        return dfs;
    }