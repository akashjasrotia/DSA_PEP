#include <iostream>
using namespace std;
extern int b;
int main() {
    int a;
    cin>>a;
    while(a--){
        cout<<a<<endl;
    }
    cout<<b<<endl;
    return 0;
}