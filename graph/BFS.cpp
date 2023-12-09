vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V);
        queue<int>q;
        q.push(0);
        visited[0]=1;
        vector<int>bfs;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto nei:adj[node]){
                if(!visited[nei]){
                visited[nei]=1;
                q.push(nei);
            }
            }
        }
        return bfs;
    }