int findParent(int u, vector<int>&parent){
    // ultimate parent
    if(u==parent[u])
    return u;


   return parent[u] = findParent(parent[u],parent);
}

// join 2 different component
void findUnion(int u, int v, vector<int>&parent, vector<int>&rank){

    int pu = findParent(u,parent);
    int pv = findParent(v,parent);
     
    //  apprx height
    if(rank[pu]>rank[pv]){
       parent[pv] = pu;
    }
    else if(rank[pu]<rank[pv]){
        parent[pu] = pv;
    }
    else{
        parent[pv] = pu;
        rank[pu]++;
    }
}

// ElogE: Tcomp
// E+V: Scomp

int kruskalsMST(int V, vector<vector<int>>& edges) {
    
    // Select the minimu edge: min heap
    vector<int>parent(V);
    vector<int>rank(V,0);
    for(int i=0;i<V;i++){
        parent[i] = i;
    }
    // wt, u,v
    // pair<int,pair<int,int>>
    priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;


    // insert all the edges into the priority queue
    for(auto edge: edges){
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        pq.push({wt,{u,v}});
    }

    int cost = 0;

    while(!pq.empty()&&V>1){
        int wt = pq.top().first;
        int u = pq.top().second.first;
        int v = pq.top().second.second;
        pq.pop();

        if(findParent(u,parent)!=findParent(v,parent)){
            findUnion(u,v,parent,rank);
            cost+=wt;
            V--;
        }
    }


    return cost;
    

}