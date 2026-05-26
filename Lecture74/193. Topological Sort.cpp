class Solution {
public:

    void topSort(vector<int>adj[], int node, vector<bool>&visited, vector<int>&result){
        
        // mark node as visited
        // explore all its neibhour who are not visited yet
        // result ke andar pushback hojao

        visited[node] = 1;

        for(int neib: adj[node]){
            if(!visited[neib]){
                topSort(adj,neib,visited,result);
            }
        }

        result.push_back(node);
    }

    vector<int> topologicalSort(int V, vector<vector<int>>& edges) {
        // Your code here

        // adjacency list
        vector<int>adj[V];

        for(auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
        }

        vector<bool>visited(V,0);
        vector<int>result;

        for(int i=0;i<V;i++){
            if(!visited[i]){
                topSort(adj,i,visited,result);
            }
        }



        reverse(result.begin(),result.end());
 
   

        return result;
    }
};