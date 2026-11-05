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
    int levels(Node* root){
        if(root == NULL) return 0;
        int leftl = levels(root->left);
        int rightl = levels(root->right);
        return 1 + max(leftl,rightl);
    }
    void rightV(Node* root,vector<int>& ans, int level){
        if(root == NULL) return;
        ans[level] = root->data;
        rightV(root->left,ans,level+1);
        rightV(root->right,ans,level+1);
    }
    vector<int> rightView(Node *root) {
        //  code here
        int n = levels(root);
        vector<int> ans(n);
        rightV(root,ans,0);
        return ans;
    }
};