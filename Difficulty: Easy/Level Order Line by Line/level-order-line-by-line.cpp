/* A binary tree Node

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
    int levels(Node* root){
        if(root == NULL) return 0;
        int lt = levels(root->left);
        int rt = levels(root->right);
        return 1 + max(lt,rt);
    }
    
    void getanswer(Node* root, vector<vector<int>>& ans, int lvl){
        if(root == NULL) return;
        ans[lvl].push_back(root->data);
        getanswer(root->left,ans,lvl+1);
        getanswer(root->right,ans,lvl+1);
    }
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        int n = levels(root);
        vector<vector<int>> ans(n,vector<int>());
        getanswer(root,ans,0);
        return ans;
    }
};