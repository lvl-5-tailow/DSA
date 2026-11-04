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

        // Function to add a new node at the front of the linked list
        void push_back(int val){
            Node* newNode = new Node(val); //created a new node
            if(head == NULL){    //for empty list, head and tail will point to the new node
                head = tail = newNode;
            } else {
                newNode->next = tail;
                tail = newNode;
            }
        }

        void printLL(){
            Node* temp = head;   //temp will initially point to where the head is pointing 

            while( temp != NULL){
                cout << temp <<" ";
                temp = temp->next;
            }
            cout<<" "<<endl;
        }
};



int main() {
    List myList;   //created an object of List class
    myList.push_front(1);    //added a new node with value 1 at the front of the linked list
    myList.push_front(2);
    myList.push_front(3); 
    myList.push_back(4);    //added a new node with value 4 at the back of the linked list
    myList.printLL();   //printed the linked list


    return 0;  
}
