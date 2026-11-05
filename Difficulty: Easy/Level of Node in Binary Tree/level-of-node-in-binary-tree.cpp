/* Structure of tree node
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
};
*/
class Solution {
  public:
    bool x;
    int levels( Node* root,int tar, int lvl , int& ans){
         if(root == NULL) return 0;
         int leftl = levels(root->left,tar,lvl+1,ans);
         int rightl = levels(root->right,tar,lvl+1,ans);
         if(root->data == tar){
            x = true;
            ans = lvl;
            return 0;
         }
         return 1 + max(leftl,rightl);
     }
    int getLevel(struct Node *node, int target) {
        // code here
        x = false;
        int ans = 0;
        levels(node,target,1,ans);
        return (x) ? ans : 0;
    }
};