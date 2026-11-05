/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    
    vector<int> levelOrder(Node *root) {
        // code here
        vector<int> ans;
        queue<Node*> q;
        if(root != NULL) q.push(root);
        while(q.size() > 0){
            Node* f = q.front();
            if(f->left != NULL) q.push(f->left);
            if(f->right != NULL) q.push(f->right);
            q.pop();
            ans.push_back(f->data);
        }
        return ans;
        
    }
    // int levels(Node* root){
    //         if(root == NULL) return 0;
    //         int leftl = levels(root->left);
    //         int rightl = levels(root->right);
    //         return 1 + max(leftl,rightl);
    //     }
    // void dfs(Node* root, vector<int>& ans,int lvl,int& k){
    //         if(root == NULL) return;
    //         if(lvl == k){
    //             ans.push_back(root-> data);
    //             return;
    //         }
    //         dfs(root->left,ans,lvl+1,k);
    //         dfs(root-> right,ans,lvl+1,k);
    //     }
    // vector<int> levelOrder(Node *root) {
    //     // code here
    //     int n = levels(root);
    //     vector<int> ans;
    //     for(int i=0;i<n;i++){
    //         dfs(root,ans,0,i);
    //     }
    //     return ans;
        
    // }
};