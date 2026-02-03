#include <iostream>
#include <vector>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
    Node(){
        next = nullptr;
    }
};
void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtFront(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}
int main(){
    Node* head = new Node(1);
    int input = -1;
    cout<<"Enter Numbers: ";
    while(true){
        cin>>input;
        if(input==-1){
            break;
        }
        insertAtFront(head,input);
    }
    printList(head);
}