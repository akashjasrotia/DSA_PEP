#include <iostream>
#include <queue>
using namespace std;
class StackUsingQueue{
    public:
    queue <int> qu;
    void add(int val){
        if(qu.empty()){
            qu.push(val);
            return;
        }
        int el = qu.front();
        qu.pop();
        add(val);
        qu.push(el);
    }
    int peek(){
        if(qu.empty()){
            cout<<"Empty!";
            return 0;
        }
        return qu.front();
    }
    int remove(){
        int el = qu.front();
        qu.pop();
        return el;
    }
    int size(){
        return qu.size();
    }
    void print(){
        int n = size();
        for (int i = 0; i<n;i++){
            int el = qu.front();
            cout<< el<<" ";
            qu.pop();
            qu.push(el);
        }
    }
};
int main(){
    StackUsingQueue st;
    int input;
    cout << "Enter numbers (0 to stop):" << endl;
    while(true){
        cin >> input;
        if(input == 0) break;
        st.add(input);
        st.print();
        cout << "\n";
    }
    cout<<"Top element: "<<st.peek()<<endl;
    st.print();
    cout<<"removed element: "<<st.remove()<<endl;
    st.print();
    cout<<"Top element: "<<st.peek()<<endl;

}