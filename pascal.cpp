#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for (int i = 0; i<n;i++){
        for (int j = 0;j<=i;j++){
            if(j==0 || j==i){
                arr[i][j] = 1;
            }
            else {
                arr[i][j]=arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    
    for (int i = 0; i<n;i++){
        for (int a=1;a<=n-i-1;a++){
            cout<<" ";
        }
        for (int j = 0; j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}