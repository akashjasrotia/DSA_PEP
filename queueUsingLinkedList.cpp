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
class Queue{
    Node* front;
    Node* tail;
public:
    Queue(){
        front = NULL;
        tail = NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        if(tail){
            tail->next = newNode;
        }
        tail = newNode;
        if(!front){
            front = tail;
        }
    }
    int peek(){
        return (front) ? front->data:-1;
    }
    int size(){
        int count = 0;
        Node* temp = front;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
    void pop(){
        if(!front){
            cout<<"Queue is already empty.";
            return;
        }
        Node* temp = front;
        front = front->next;
        cout<<"Popped: "<< temp->data;
        delete temp;
    }
    bool isEmpty(){
        return (front == NULL);
    }
    void printQueue(){
        Node* temp = front;
        while(temp){
            cout<<temp->data<<"";
            temp = temp->next;
        }
    }
};
int main(){
    Queue q1;
    int input;
    cout << "Enter numbers (0 to stop):" << endl;
    while(true){
        cin >> input;
        if(input == 0) break;
        q1.push(input);
    }
    q1.printQueue();
    cout<<endl;
    q1.pop();
    cout<<endl;
    q1.printQueue();
}