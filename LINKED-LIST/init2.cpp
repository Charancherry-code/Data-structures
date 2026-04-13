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

    void makeCycle(){
        if(head != nullptr && tail != nullptr){
            tail->next = head;
        }
    }


    bool isCycle(){

        //two pointers
        Node* slow =head;
        Node* fast =head;

        while( fast!= nullptr && fast->next != nullptr){

            slow = slow->next;
            fast = fast->next->next;

            if( slow == fast){

                cout<<" cycle detected";
                return true;
            }
        }
        cout<<" no cycle";
        return false;
    }


    void removeCycle(){

        //1st step detect a cycle
        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;

        while( fast!= nullptr && fast->next != nullptr){

            slow = slow->next;
            fast = fast->next->next;
            
            if( slow == fast){
                cout<<"cycle detected";
                hasCycle = true;
                break;
            }
        }

        if( !hasCycle){

            cout<<"cycle not detected";
            return;
        }

        slow = head;
        if( slow == fast){ //special case: cycle starts at head
            while( fast->next != slow){

                fast = fast->next;     
            }
            fast->next = nullptr; //removing cycle

        }else{

              Node* prev = fast;
              while( slow != fast){

                slow = slow->next;
                prev = fast;
                fast = fast->next;
              }
              prev->next = nullptr; //removing cycle
        }
    }

};

int main(){

    List linked_list;
    linked_list.push_front(4);
    linked_list.push_front(3);
    linked_list.push_front(2);
    linked_list.push_front(1);
    linked_list.makeCycle();
    linked_list.removeCycle();
    linked_list.printList();
}  