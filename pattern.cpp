#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A';
    for (int i = 1; i<=n;i++){
        for (int j = 1 ;j<=i;j++){
            if( int(ch) <= 90 && int(ch)>=65){
                cout<<ch<<" ";
                ch++;
            }
            else {
                cout<<'A'<<" ";
                ch = 'B';
            }
        }
        cout<<endl;
    }
    return 0;
}