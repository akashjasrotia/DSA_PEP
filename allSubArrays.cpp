#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int input = -1;
    cout << "Enter numbers (0 to stop):" << endl;
    while (true) {
        cin >> input;
        if (input == 0) break;
        arr.push_back(input);
    }
    int count=0;
    for (int i = 0; i<arr.size(); i++){
        for (int j = i; j < arr.size(); j++){
            for (int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<count<<" ";
}