#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool possible(vector<int> arr,int maxOperations,int maxBalls){
    long op = 0;
    for (auto i:arr){
        op+=(i-1)/maxBalls;

        if(op>maxOperations){
            return false;
        }
    }
    return true;
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
    int maxOp;
    cout<<"Maximum Operations: ";
    cin>>maxOp;
    int left = 1;
    int right = *max_element(arr.begin(),arr.end());
    while(left<right){
        int mid = left+(right-left)/2;
        if(possible(arr,maxOp,mid)){
            right = mid;
        }
        else {
            left = mid+1;
        }
    }
    cout<< left;
}