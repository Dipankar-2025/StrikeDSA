long long pickGifts(vector<int>& gifts, int k) {
    
    // max heap build karo
    priority_queue<int>pq(gifts.begin(),gifts.end());

    long long ans = 0;

    while(k){
        ans+= pq.top();
        pq.push(sqrt(pq.top()));
        pq.pop();
        k--;
    }

    return ans;
}

// correct the code