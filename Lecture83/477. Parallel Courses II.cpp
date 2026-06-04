class Solution {
public:
    int minNumberOfSemesters(int n, vector<vector<int>>& relations, int k) {
        // code here
        // adjacenecy List create kjiye
        vector<int>adj[n];
        vector<int>InDegree(n,0);
        for(auto edge: relations){
            int u = edge[0]-1;
            int v = edge[1]-1;
            adj[u].push_back(v);
            InDegree[v]++;
        }

        int totalSemster = 0;
        // Kahn's algorithm
        queue<int>q;
        // push all the node into the queue whose indegree is zero
        for(int i=0;i<n;i++){
            if(InDegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            // queue: Total Number of avaialble courses which we can do in this current semester
            // k: at most k course you can do in this semester
            int totalCourses = q.size();
            totalCourses = min(totalCourses,k);
            totalSemster++;

            while(totalCourses--){
                int node = q.front();
                q.pop();
                for(int neib: adj[node]){
                    InDegree[neib]--;
                    if(InDegree[neib]==0)
                    q.push(neib);
                }
            }
        }


        return totalSemster;



    }
};