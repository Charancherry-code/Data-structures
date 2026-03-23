#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){

        data = val;
        next = NULL;
    }

    
};

class List{
    Node* head;
    Node* tail;

public:
     List() {

        head = NULL;
        tail = NULL;
     }
void push_back(int val){

        Node* newNode = new Node(val);

        if( head == NULL){
            
            head = tail = newNode;
        }else{

            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(){

        Node* temp = head;
        while( temp != NULL){

            cout<<temp->data<<" ->";
            temp = temp->next;
        }

        cout<<"NULL";
    }
     
};

int main(){

    List linked_list;
    linked_list.push_back(10);
    linked_list.push_back(20);
    linked_list.push_back(30);
    linked_list.printList();


    return 0;
}