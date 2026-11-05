/* Structure of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int levels(Node* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        return 1 + max(leftl,rightl);
    }
    
    void preorder(Node* root, vector<int>& ans, int level){
        if(root == NULL) return;
        ans[level] = (root->data);
        preorder(root->right,ans,level+1);
        preorder(root->left,ans,level+1);
    }
    vector<int> leftView(Node *root) {
        // code here
        int n = levels(root);
        vector<int> ans(n);
        preorder(root,ans,0);
        return ans;
    }
};