#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void insertAtFront(Node* &head,int val){
    Node* newNode = new Node(val);
    
}
int main() {
    int n;
    int input = -1;
    cout<<"Enter Numbers: ";
    while(true){
        cin>>input;
        if(input==-1){
            break;
        }
        insertAtFront(head,input);
    }
}