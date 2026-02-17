#include <iostream>
using namespace std;
vector<int> kadane(vector <int> arr){
    int cSum = arr[0];
    int maxSum = arr[0];
    int start = 0,end = 0;
    int tempStart = 0;
    for (int i  = 1 ;i <arr.size();i++){
        if(arr[i] > arr[i] + cSum){
            cSum = arr[i];
            tempStart = i;
        }
        else{
            cSum += arr[i];
        }
        if(maxSum < cSum){
            start = tempStart;
            end = i;
        }
        maxSum = max(maxSum,cSum);
    }
    return {maxSum,start,end};
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
    vector <int> result = kadane(arr);
    cout<<"Maximum subarray sum is: "<<result[0]<<endl;
    cout<<"Subarray indices are: ["<<result[1]<<", "<<result[2]<<"]"<<endl;

}