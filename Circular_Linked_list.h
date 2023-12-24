#include <iostream>
using namespace std;
// This is the node structure used in the Circular Linked List
struct node{
    char data;
    struct node* next;

    node(char c){
        data = c;
        next = NULL;
    }
};
// This class is for creation of a circular linked list
// For the use of deleting the letters at flame number
class circularLinkedList{
    private:

    node *head;
    int size;

    public:

    circularLinkedList(){
        head = NULL;
        size = 0;
    }
    // Insert the data but as in this project the data is already defined as:
    // F->L->A->M->E->S->F and so on
    void insert(char c){
        if(head == NULL){
            node* n = new node(c);
            head = n;
            head->next = head;
            size++;
        }else{
            node* n = new node(c);
            node* temp = head;
            while(temp->next!=head){
                temp = temp->next;
            }
            temp->next = n;
            n->next = head; // Making the list circular
            size++;
        }
    }

    int getSize(){
        return size;
    }
    // When only one letter is left it will be surely at head
    // So it has to be return for checking with the predefined
    // Switch cases
    char returnLast(){
        return head->data;
    }
    // The Brain of the class
    // Does the deleting of letter at flame number
    char flames(int pos){
        while(getSize()!=1){
            // Since flame number being to equal to head letter number
            // It becomes a special as head as to be updated
            if(pos==1){
                node* temp = head;
                    while(temp->next!=head){
                        temp=temp->next;
                    }
                    node* todelete = temp->next;
                    temp->next=temp->next->next;
                    head = temp->next; // Update head
                    delete todelete;
                    size--;
            }else{
                int count=1;
                node* temp = head;
                while(count!=pos-1){
                    temp=temp->next;
                    count++;
                }
                node* todelete = temp->next;
                temp->next = temp->next->next;
                delete todelete; // Deleting of the letter at flame number
                size--;
                head = temp->next;
            }
        }
        return head->data; // Return the only letter left
    }
};
