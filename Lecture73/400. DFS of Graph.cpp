// Function to return a list containing the DFS traversal of the graph.

void DFS(vector<int> adj[], int node, vector<bool>&visited, vector<int>&result){
    
    // base caser
    if(visited[node]==1){
        return;
    }

    visited[node] = 1;
    result.push_back(node);

    for(int neib: adj[node]){
        if(!visited[neib]){
            DFS(adj,neib,visited,result);
        }
    }
}


vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    
    vector<int>result;
    vector<bool>visited(V,0);

    DFS(adj,0,visited,result);

    return result;
}