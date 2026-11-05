/* The Node structure is
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    int levels(Node* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        return 1 + max(leftl,rightl);
    }
    void getsum(Node* root,int& evensum, int& oddsum, int level){
        if(root == NULL) return;
        (level % 2 == 0) ? evensum += root->data : oddsum += root->data;
        getsum(root->left,evensum,oddsum,level+1);
        getsum(root->right,evensum,oddsum,level+1);
    }
    int getLevelDiff(Node *root) {
        // code here
        int n = levels(root);
        int evensum = 0;
        int oddsum = 0;
        getsum(root,evensum,oddsum,0);
        return evensum-oddsum;
    }
};