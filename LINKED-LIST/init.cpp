#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Create a new node with the given value.
    Node(int val){

        data = val;
        next = nullptr;
    }

    
};

class List{
    Node* head;
    Node* tail;

public:
    // Start with an empty list.
     List() {

          head = nullptr;
          tail = nullptr;
     }

    // Release all dynamically allocated nodes when the list goes out of scope.
    ~List(){

        Node* temp = head;

        while(temp != nullptr){

            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }

    // Check whether the list currently has no nodes.
    bool isEmpty(){

        return head == nullptr;
    }

    // Insert a new node at the end of the list.
    void push_back(int val){

        Node* newNode = new Node(val);

        if(isEmpty()){
            
            head = tail = newNode;
        }else{

            tail->next = newNode;
            tail = newNode;
        }
    }

    // Insert a new node at the beginning of the list.
    void push_front(int val){

        Node* newNode = new Node(val);

        if(isEmpty()){

            head = tail = newNode;
        } else {

            newNode->next = head;
            head = newNode;
        }
    }

    // Print all nodes from head to tail.
    void printList(){

        Node* temp = head;
        while( temp != nullptr){

            cout<<temp->data<<" ->";
            temp = temp->next;
        }

        cout<<"NULL\n";
    }

    // Remove the first node from the list.
    void pop_front() {
        if(head == nullptr){

            cout<<"ll is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;

        if(head == nullptr){
            tail = nullptr;
        }
    }

    // int size(){

    //     int count = 0;
    //     Node* temp = head;

    //     while(temp != nullptr){

    //         count++;
    //         temp = temp->next;
    //     }

    //     return count;
    // }
     

    // Insert a node near the middle or at the requested position.
    void insertMiddle( int val,int pos){

        if(pos <= 0 || head == nullptr){
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 0; i < pos - 1 && temp->next != nullptr; i++){
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if(newNode->next == nullptr){
            tail = newNode;
        }
    }

    // Remove the last node from the list.
    void pop_back(){

        if(head == nullptr){
            cout<<"ll is empty\n";
            return;
        }

        if(head == tail){
            delete head;
            head = tail = nullptr;
            return;
        }

        Node* temp = head;
        while( temp->next->next != nullptr){

            temp =  temp->next;

        }

        temp->next = nullptr;
        delete tail;
        tail = temp;
    }

    // Search for a value iteratively and return its index, or -1 if missing.
    int searchKey( int key){

        Node * temp = head;
        int idx =0;

        while( temp != NULL){
            if( temp->data == key){

                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    // Recursive helper used by searchRec().
    int helper( Node* temp, int key){

        if( temp == nullptr){
            return -1;
        }

        if( temp->data == key){
            return 0;
        }

       int idx = helper( temp->next, key);
       if( idx == -1){

        return -1;
       }

       return idx+1;
    }

    // Search for a value recursively and return its index, or -1 if missing.
    int searchRec( int key){

       return helper( head, key);
    }

   void reverseLL(){

      Node* curr = head;
        Node* prev = nullptr;
        Node* oldHead = head;

        while( curr != nullptr){

        Node* next = curr->next;
        curr->next = prev;
           //updation for next interartion
        prev = curr;
        curr = next;

      }

      head = prev;
        tail = oldHead;
   }

   //size of a ll

    int size(){

        int count = 0;
        Node* temp = head;

        while(temp != nullptr){

            count++;
            temp = temp->next;
        }
        return count;
    }

    //find and remove Nth Node from end

   void nthNodeDel( int n){
    int sz = size(); 
    Node* prev = head;

    for( int i=1; i< sz-n; i++){

        prev = prev->next;
    }
    Node* toDel = prev->next;
    cout<<toDel;

    prev->next = prev->next->next;

   }
};

int main(){

    List linked_list;
    linked_list.push_front(5);
    linked_list.push_back(10);
    linked_list.push_back(20);
    linked_list.push_back(30);
    linked_list.printList();
    // linked_list.reverseLL();

    linked_list.nthNodeDel(2);

    linked_list.printList();

     
    return 0;
}