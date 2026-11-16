class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {
    Node* head;

  public:
    myQueue() {
        // Initialize your data members
        head = NULL;
    }

    bool isEmpty() {
        // check if the queue is empty
        return (head == NULL) ? true : false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* n = new Node(x);
        if(head == NULL) {
            head = n;
            return;
        }
        Node* temp = head;
        while( temp->next != NULL) temp =temp->next;
        temp->next = n;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(head == NULL) return -1;
        return head->data;
        
    }

    int size() {
        // Returns the current size of the queue.
        int x = 0;
        Node* temp = head;
        while(temp != NULL){
            x++;
            temp = temp->next;
        }
        return x;
    }
};
