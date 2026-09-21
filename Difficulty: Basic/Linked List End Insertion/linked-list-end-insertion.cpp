/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
       Node* n = new Node(x);
       n->next = NULL;
        Node* temp = head;
        if(head == NULL){
            return n;
        }
        while(temp-> next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        return head;
    }
};