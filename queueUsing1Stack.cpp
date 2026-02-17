#include <iostream>
#include <stack>
using namespace std;
class QueueUsingStack{
    public:
    stack <int> st;
    void add(int val){
        if(st.empty()){
            st.push(val);
            return;
        }
        int el = st.top();
        st.pop();

        add(val);
        st.push(el);
    }
    int remove(){
        int el = st.top();
        st.pop();
        return el;
    }
    int peek(){
        return st.top();
    }
};
int main(){
    QueueUsingStack q1;
    int input;
    cout << "Enter numbers (0 to stop):" << endl;
    while(true){
        cin >> input;
        if(input == 0) break;
        q1.add(input);
    }
    cout<<q1.peek()<<endl;
    q1.remove();
    cout<<q1.peek()<<endl;
}