#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){

        data = val;
        next = nullptr;
    }

    
};

class List{
    Node* head;
    Node* tail;

public:
     List() {

          head = nullptr;
          tail = nullptr;
     }

    bool isEmpty(){

        return head == nullptr;
    }

void push_back(int val){

        Node* newNode = new Node(val);

        if(isEmpty()){
            
            head = tail = newNode;
        }else{

            tail->next = newNode;
            tail = newNode;
        }
    }

    void push_front(int val){

        Node* newNode = new Node(val);

        if(isEmpty()){

            head = tail = newNode;
        } else {

            newNode->next = head;
            head = newNode;
        }
    }

    void printList(){

        Node* temp = head;
        while( temp != nullptr){

            cout<<temp->data<<" ->";
            temp = temp->next;
        }

        cout<<"NULL";
    }

    int size(){

        int count = 0;
        Node* temp = head;

        while(temp != nullptr){

            count++;
            temp = temp->next;
        }

        return count;
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