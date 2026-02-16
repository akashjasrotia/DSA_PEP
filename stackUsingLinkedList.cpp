#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Stack{
    Node* top;
public:
    Stack(){
        top = NULL;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = top;
        top = temp;
    }
    int peek(){
        return (top) ? top->data:-1;
    }
    void pop(){
        if(top == NULL){
            cout<<"Stack empty!";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    bool isEmpty(){
        return top == NULL;
    }
    void print(){
        Node* temp = top;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main(){
    Stack s1;
    int input = 0;
    while(1){
        cout<<"enter a number (-1 to stop): ";
        cin>>input;
        if(input == -1){
            break;
        }
        s1.push(input);
    }
    s1.print();
}