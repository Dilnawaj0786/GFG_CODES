/* Structure of binary tree node
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
  bool ans;
    int levels(Node* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        if(abs(leftl-rightl) > 1){
            ans = false;
            return 0;
        } 
        return 1 + max(leftl,rightl);
    }
    bool isBalanced(Node* root) {
        // code here
        ans = true;
        levels(root);
        return ans;
    }
};