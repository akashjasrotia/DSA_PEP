#include <iostream>
#include <vector>
using namespace std;
int main(){
    int input=0;
    vector <int> arr;
    cout<<"Enter numbers between 1 to n where n is size of array and -1 to stop inputting:"<<endl;
    while(input!=-1){
        cin>>input;
        if(input!=-1){
            arr.push_back(input);
        }
    }
    for(int i = 0 ;i<arr.size();i++){
        int a = abs(arr[i])-1;
        if(arr[a]<0){
            cout<<arr[i]<<" ";
        }
        else {
            arr[a] = -arr[a];
        }
    }
    return 0;
}