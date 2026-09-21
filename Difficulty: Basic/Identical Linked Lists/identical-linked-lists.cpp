/* Strucutre of a Node in linked list
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
    int size(Node* head){
        int count = 0;
        Node* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        int size1 = size(head1);
        int size2 = size(head2);
        if(size1 != size2) return false;
        
        Node* temp1 = head1;
        Node* temp2 = head2;
        while((temp1 != NULL) && (temp2 != NULL)){
            if(temp1-> data != temp2-> data) return false;
            temp1= temp1->next;
            temp2= temp2->next;
        }
        return true;
    }
};