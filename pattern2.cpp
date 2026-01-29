#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1;i<n;i++){
        for (int s=1;s<=n-i;s++){
            cout<<' ';
        }
        for (int st=1;st<=(i * 2 - 1);st++){
            if(st==1 || st==2*i-1){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i=1;i<=n*2-1;i++){
        cout<<'*';
    }
    cout<<endl;
    for (int i=n-1;i>=1;i--){
        for (int s=1;s<=n-i;s++){
            cout<<' ';
        }
        for (int st=1;st<=2*i-1;st++){
            if(st==1 || st==2*i-1){
                cout<<'*';
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}