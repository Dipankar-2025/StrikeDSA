/**
 * Definition for a binary tree node.
 * struct Node {
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node(int x) : data(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<int> findCommon(Node *root1, Node *root2) {
        // Your code here
        stack<Node*>s1,s2;
        vector<int>result;
        
        while(true){

        while(root1){
            s1.push(root1);
            root1 = root1->left;
        }

        while(root2){
            s2.push(root2);
            root2 = root2->left;
        }

        if(!s1.empty() && !s2.empty()){
            root1 = s1.top();
            root2 = s2.top();

            if(root1->data == root2->data){
                result.push_back(root1->data);
                s1.pop();
                s2.pop();
                root1 = root1->right;
                root2 = root2->right;
            }
            else if(root1->data < root2->data){
                s1.pop();
                root1 = root1->right;
                root2 = NULL;
            }
            else{
                 s2.pop();
                root2 = root2->right;
                root1 = NULL;
            }
        }
        else{
            break;
        }
        }

        return result;
    }
};