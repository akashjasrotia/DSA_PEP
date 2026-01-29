#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    long b=0;
    while(a>0){
        int x = a%10;
        b=b*10+x;
        a/=10;
    }
    if(b>INT_MAX || b<INT_MIN){
        cout<<-1;
    }
    else {
        cout<<b;
    }
}