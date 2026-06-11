class Solution {
public:
    
    void DFS(vector<int> adj[], int node, vector<bool>&visited){
        visited[node] = 1;

        for(auto neib: adj[node]){
            if(!visited[neib]){
                DFS(adj,neib,visited);
            }
        }
    };

    int isEulerCircuit(int V, vector<int> adj[]) {
        // code here
        // Euler circuit (Euler path): 2
        // Euler path: 1
        // 0
        
        vector<int>Degree(V,0);

        for(int i=0;i<V;i++){
            Degree[i] = adj[i].size();
        }

        // count the number of nodes whose degree is odd
        int countOdd = 0;

        for(int i=0;i<V;i++){
            if(Degree[i]%2)
            countOdd++;
        }
        
        // Euler path: Number of odd degree node: 0 or 2 
        if(countOdd!=0 && countOdd!=2)
        return 0;


        vector<bool>visited(V,0);
         
        // Apply DFS: Pick any node whose degree exist
        for(int i=0;i<V;i++){
            if(Degree[i]){
                DFS(adj,i,visited);
                break;
            }
        }

         

        // If any node degree exist and who is not visited, then graph is in multiple components
        // it is not a euler circuit or path

        for(int i=0;i<V;i++){
            if(!visited[i]&&Degree[i])
            return 0;
        }




        return countOdd ? 1: 2;











        
        
    }
};