class Solution {
public:
    //     01234  
    // s: "AABCD"
    // t: "CAB"

    // targetCounter ; []128 , A: 1, B: 1, C:1   , target = 3
    // windowCounter:  []128:  A: 0 ,B:1 , C:1    , currentTarget = 2
    // minLen: 3, startIndex: 1
    //  left = 2 , right = 3

    string minWindow(string s, string t) {
        // Your code here

        vector<int>targetCounter(128,0);
       
    //    store the count of each character of string t
        for(char c: t){
            targetCounter[c]++;
        }
        
        // count of character in the current window
        vector<int>windowCounter(128,0);
        int minLen = INT_MAX, startIndex = 0, left = 0, right = 0, n = s.size();
    //    minLength of my substring answ4er, startIndex: answer aayega uska starting index kunsa hoga
        int target = t.size(), currentTarget = 0;

        while(right<n){
            windowCounter[s[right]]++;

            if(targetCounter[s[right]]&& windowCounter[s[right]]<=targetCounter[s[right]])
            currentTarget++;

            while(currentTarget==target){
                if(right-left+1<minLen){
                    minLen = right-left+1;
                    startIndex = left;
                }
                
                if(targetCounter[s[left]]&& windowCounter[s[left]]<=targetCounter[s[left]])
                currentTarget--;

                windowCounter[s[left]]--;
                left++;

            }

            right++;
        }

        
        return minLen == INT_MAX ? "": s.substr(startIndex, minLen);

    }
};