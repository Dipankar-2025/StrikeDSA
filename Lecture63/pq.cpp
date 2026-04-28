#include<iostream>
using namespace std;

int main(){
    
    // max heap: priority queue
    // vector<int>arr = {10,30,70,25,18};
    // priority_queue<int>pq(arr.begin(),arr.end());
    // pq.push(10);
    // pq.push(30);
    // pq.push(70);
    // pq.push(25);
    // pq.push(18);
    
    // delete karna hoga: top pe hoga, maximun hoga
    // pq.pop();
    // cout<<pq.top();


    // min heap: smallest element 
    vector<int>arr = {10,5,50,8,90};
    priority_queue<int, vector<int>, greater<int>>pq(arr.begin(),arr.end());
    // pq.push(10);
    // pq.push(5);
    // pq.push(50);
    // pq.push(8);
    // pq.push(90);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}