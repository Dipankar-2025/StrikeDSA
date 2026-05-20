// Function to detect cycle in an undirected graph.

bool findLoop(vector<vector<int>>&adj, vector<bool>&visited, int node, int parent){
    // if(visited[node]==1){
    //     return 1;
    // }

    visited[node] = 1;
    for(int neib: adj[node]){
        if(neib==parent){
            continue;
        }
        else if(visited[neib]){
            return 1;
        }
        else{
            if(findLoop(adj,visited,neib,node))
            return 1;
        }
    }


    return 0;


}


bool isCycle(int V, vector<vector<int>>& edges) {
    // convert the edges vector into adjList

    vector<vector<int>>adj(V);
    vector<bool>visited(V,0);

    // for(auto edge: edges){
    //     adj[edge[0]].push_back(edge[1]);
    //     adj[edge[1]].push_back(edge[0]);
    // }

    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }



    for(int i=0;i<V;i++){
        if(!visited[i]){
          if(findLoop(adj,visited,i,-1)){
            return 1;
          }
        }
    }


    return 0;

    


}