/* A binary tree node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool ans;
    void check(Node* root, int tar){
        if(root == NULL) return;
        tar -= root->data;
        if(root->left == NULL && root->right == NULL && tar == 0){
            ans = true;
            return;
        }
        check(root->left,tar);
        check(root->right,tar);
    }
    bool hasPathSum(Node *root, int target) {
        // code here
        ans = false;
        check(root,target);
        return ans;
    }
};