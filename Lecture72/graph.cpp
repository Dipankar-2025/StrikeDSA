#include<iostream>
using namespace std;

int main(){
   
    // tell me number of vertex(node) and edges in your graph
    int vertex, edges;
    cout<<"Enter vertex and edges-> ";
    cin>>vertex>>edges;

    // Create Adjacency matrix
    vector<vector<bool>>adjMat(vertex, vector<bool>(vertex,0));

    // vertex: 5
    // 5*5 : 5 rows and 5 cols: initalize sabko 0

    cout<<"Enter the edges\n";

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }


    // print kar dete hai apne adjMat

    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}