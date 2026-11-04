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
};

int main() {
    return 0;
}
