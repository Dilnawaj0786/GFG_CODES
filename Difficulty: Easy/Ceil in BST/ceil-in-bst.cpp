/*
Definition for Node
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
    void find(Node* root,int& ans,int x){
        if(root == NULL) return;
        if(root->data >= x){
            ans = root->data;
            find(root->left,ans,x);
        }else{
            find(root->right,ans,x);
        }
    }
    int findCeil(Node* root, int x) {
        // code here
        int ans = -1;
        find(root,ans,x);
        return ans;
    }
};
