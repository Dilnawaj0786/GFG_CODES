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
    void dfs(Node* root, vector<int>& ans,int lvl,int& k){
        if(root == NULL) return;
        if(lvl == k) ans.push_back(root-> data);
        dfs(root->left,ans,lvl+1,k);
        dfs(root-> right,ans,lvl+1,k);
    }
    vector<int> kdistance(Node *root, int k) {
        // code here
        vector<int> ans;
        dfs(root,ans,0,k);
        return ans;
    }
};