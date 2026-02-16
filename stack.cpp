#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;

public:
    Stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int val){
        if(top == size-1){
            cout<<"Stack full";
            return;
        }
        arr[++top] = val;
    }

    int peek(){
        if(top == -1){
            cout<<"Stack empty";
            return -1;
        }
        return arr[top];
    }
    void pop(){
        if(top == -1){
            cout<<"Stack already empty";
            return;
        }
        top--;
    }
    bool isEmpty(){
        return top == -1;
    }
    void print(){
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s1(10);
    int input = 0;
    while(input != -1){
        cout<<"Enter a number to push into stack (or -1 to stop): ";
        cin>>input;
        if(input != -1){
            s1.push(input);
        }
    }

    // cout<<s1.peek();
    // cout<<s1.isEmpty();
    s1.print();


}