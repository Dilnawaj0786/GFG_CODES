/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int n = 0;
        Node* temp = head;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        if(k > n) return -1;
        k = n-k;
        
        Node* x = head;
        while(x != NULL && k != 0){
            x = x->next;
            k--;
        }
        return x->data;
    }
};