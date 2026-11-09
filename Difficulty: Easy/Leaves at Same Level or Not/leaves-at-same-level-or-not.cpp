/* Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool ans;
    int levels(Node* root){
        if(root == NULL) return 0;
        int lt = levels(root->left);
        int rt = levels(root->right);
        return 1+ max(lt,rt);
    }
    void find(Node* root, int lvl, int n){
        if(root == NULL ) return;
        if(root->left == NULL && root->right == NULL && lvl != n-1){
            ans = false;
            return;
        }
        find(root->left,lvl+1,n);
        find(root->right,lvl+1,n);
    }
    bool check(Node* root) {
        // code here
        int n = levels(root);
        ans = true;
        find(root,0,n);
        return ans;
        
    }
};