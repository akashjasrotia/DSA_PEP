#include <iostream>
#include <stack>
using namespace std;
class QueueUsingStack{
public:
    stack<int> s1;
    stack<int> s2;
    QueueUsingStack(){}
    void push(int val){
        s1.push(val);
    }
    int pop(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int el = s2.top();
        s2.pop();
        return el;
    }
    int peek(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    bool isEmpty(){
        return (s1.empty() && s2.empty());
    }
};
int main(){
    QueueUsingStack q1;
    int input;
    cout << "Enter numbers (0 to stop):" << endl;
    while(true){
        cin >> input;
        if(input == 0) break;
        q1.push(input);
    }
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
}