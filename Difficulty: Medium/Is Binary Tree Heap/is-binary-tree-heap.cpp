/*
class Node {
   public:
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
  int getsize(Node* root,int& size){
      if(root == NULL) return 0;
      size++;
      getsize(root->left,size);
      getsize(root->right,size);
  }
  
  bool isMaxHeap(Node* root){
      if(root == NULL) return true;
      if(root->left != NULL && root->left->data > root->data) return false;
      if(root->right != NULL && root->right->data > root->data) return false;
      return isMaxHeap(root->left) && isMaxHeap(root->right);
  }
  
  bool isCBT(Node* root,int idx,int& n){
      if(root == NULL) return true;
      if(idx>n) return false;
      return isCBT(root->left,2*idx,n) && isCBT(root->right,2*idx+1,n);
      
  }
    bool isHeap(Node* root) {
        // code here
       int size = 0;
       getsize(root,size);
       return isMaxHeap(root) && isCBT(root,1,size);
       
    }
};