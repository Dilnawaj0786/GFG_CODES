/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool issame(Node* lst, Node* rst){
        if(lst == NULL && rst == NULL) return true;
        if(lst == NULL || rst == NULL) return false;
        if(lst->data != rst->data ) return false;
        return issame(lst->left,rst->right) && issame(lst->right,rst->left);
    }
    bool isSymmetric(Node* root) {
        // code here
        Node* lst = root->left;
        Node* rst = root->right;
        return issame(lst,rst);
        
    }
};