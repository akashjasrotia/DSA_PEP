#include <iostream>
using namespace std;
int main(){
    int input;
    vector<int> arr;
    cout << "Enter numbers (0 to stop):" << endl;
    while(true){
        cin >> input;
        if(input == 0) break;
        arr.push_back(input);
    }
    sort(arr.begin(),arr.end());
    for (int i =0 ; i < arr.size();i++){
        if(arr[i]!=i+1){
            cout<<i+1;
        }
    }
}