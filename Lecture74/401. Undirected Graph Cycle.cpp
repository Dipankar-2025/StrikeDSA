
// Function to detect cycle in an undirected graph.
// solution 1

bool isCycle(int V, vector<vector<int>>& edges) {
    
    vector<int>adj[V];

    for(auto edge: edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    vector<bool>visited(V,0);

   

   for(int i=0;i<V;i++){

        if(!visited[i]){

        queue<pair<int,int>>q;
        q.push({i,-1});
        visited[i]=1;

        while(!q.empty()){
            pair<int,int>element = q.front();
            q.pop();
            int node = element.first;
            int parent = element.second;

            for(int neib: adj[node]){
                if(neib!=parent){
                    if(visited[neib])
                    return 1;
                    else{
                        visited[neib]=1;
                        q.push({neib,node});
                    }
                }
            }
        }

        }

    }

    return 0;

}





// Solution 2: 

class Solution {
public:

    vector<int> topologicalSort(int V, vector<vector<int>>& edges) {
        // Your code here

        // adjacency list

        // Kahn's algorithm
        vector<int>adj[V];
        vector<int>inDegree(V,0);
        // Find the inDegree of each node

        for(auto edge: edges){

            //  u --> v
            // edge[0] --> edge[1]
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }

        queue<int>q;

        // put all those node into the queue whose inDegree is zero

        for(int i=0;i<V;i++){
            if(!inDegree[i]){
                q.push(i);
            }
        }

        vector<int>result;

        while(!q.empty()){
            int node = q.front();       
            q.pop();
            result.push_back(node);

            for(int neib: adj[node]){
                inDegree[neib]--;
                if(!inDegree[neib]){
                    q.push(neib);
                }
            }
        }



        return result;



       
    }
};