/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  class Quad{
    public:
        long long mx;
        long long mn;
        bool isBST;
        int size;
  };
  int maxsize;
  Quad solve(Node* root){
      if(root == NULL) return {LLONG_MIN,LLONG_MAX,true,0};
      Quad left = solve(root->left);
      Quad right = solve(root->right);
      long long val = root->data;
      long long mx = max(val,max(left.mx,right.mx));
      long long mn = min(val,min(left.mn,right.mn));
      bool IsBSTR = (val > left.mx && val < right.mn && left.isBST && right.isBST);
      int size = 1 + left.size + right.size;
      if(IsBSTR) maxsize = max(maxsize,size);
      return {mx,mn,IsBSTR,size};
  }
    int largestBst(Node *root) {
        // code here
        maxsize =0;
        solve(root);
        return maxsize;
        
    }
};