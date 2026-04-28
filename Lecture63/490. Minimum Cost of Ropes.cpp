class Solution {
public:
    long long minCost(vector<long long>& arr) {
        // code here
        // min heap ko create karna
        priority_queue<long long, vector<long long>, greater<long long>>pq(arr.begin(),arr.end());
        long long cost = 0;
        while(pq.size()>1){
            //    first minimum element
            int first = pq.top();
            pq.pop();
            //    second minimum element
            int second = pq.top();
            pq.pop();

            cost+= first+second;
            pq.push(first+second);
        }

        return cost;
    }
};