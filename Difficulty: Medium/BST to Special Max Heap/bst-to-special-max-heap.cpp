/* Binary Tree Node Structure
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
    void dfs(Node* root,vector<int>& ans){
        if(root == NULL) return;
        dfs(root->left,ans);
        ans.push_back(root->data);
        dfs(root->right,ans);
    }
    
    void modify(Node* root,vector<int>& ans,int& idx){
        if(root == NULL) return;
        modify(root->left,ans,idx);
        modify(root->right,ans,idx);
        root->data = ans[idx++];
    }
    void convertToMaxHeap(Node* root) {
        // code here
        vector<int> ans;
        dfs(root,ans);
        int idx = 0;
        modify(root,ans,idx);
    }
};
