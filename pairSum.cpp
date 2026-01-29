#include <iostream>
#include <vector>
using namespace std;
int main(){
    int input = 0;
    vector<int> arr;
    cout << "Enter numbers (-1 to stop):" << endl;
    while (true){
        cin >> input;
        if (input == -1)
            break;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    pair<int,int> result = {-1,-1};
    int i=0;
    int j = arr.size()-1;
    while(i<j){
        int sum = arr[i] + arr[j];
        if(sum<target){
            i++;
        }
        else if(sum>target){
            j--;
        }
        else {
            result.first = i;
            result.second = j;
            break;
        }
    }
    if(result.first != -1 && result.second != -1){
        cout<<"Indexes: ("<<result.first<<", "<<result.second<<")";
    }
    else {
        cout<<"No pair found";
    }
    return 0;
}