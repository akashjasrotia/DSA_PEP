#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else if(arr[mid] > target){
            right = mid-1;
        }
    }
    return -1;
}
int main(){
    int input;
    vector<int> arr;
    cout << "Enter numbers (0 to stop):" << endl;
    while(true){
        cin >> input;
        if(input == 0) break;
        arr.push_back(input);
    }
    int target;
    cin>>target;
    int result = binarySearch(arr,target);
    cout<<"At index: "<<result;
}