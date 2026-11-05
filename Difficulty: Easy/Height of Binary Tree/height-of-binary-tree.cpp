/* Structrue of Binary Tree Node
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
    int helper(Node* root){
        if(root == NULL) return 0;
        return 1 + max(helper(root->left),helper(root->right));
    }
    int height(Node* root) {
        // code here
        int x = helper(root);
        return --x;
    }
};