#include <iostream>
using namespace std;

//The asterisk * indicates that next does not store data directly, but rather holds a memory address

class Node {
    public :
        int data;
        Node* next;   //next is a pointer to the next node in the linked list
        Node(int val) {
            data = val;
            next = NULL;    //next is initialized to NULL, indicating the end of the list
        }
};

class List{
    Node* head;   //head is a pointer to the first node in the linked list
    Node* tail;   //tail is a pointer to the last node in the linked list
    public:
        List() {
            head = tail = NULL;   //head and tail are initialized to NULL, indicating an empty list
        }
        // Function to add a new node at the front of the linked list
        void push_front(int val) {
            Node* newNode = new Node(val);   //created a new Node
            if(head == NULL){    //for empty list, head and tail will point to the new node
                head = tail = newNode;
            }
            else{    //for non-empty list, new node will be added at the front and head will point to the new node
                newNode->next = head;
                head = newNode;
            }
        }
};



int main() {
    List myList;   //created an object of List class
    myList.push_front(1);    //added a new node with value 1 at the front of the linked list
    myList.push_front(2);
    myList.push_front(3); 


    return 0;  
}
