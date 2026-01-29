#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int input,sum=0;
    vector<int> arr;
    unordered_map<int,int> seen;
    cout << "Enter numbers (0 to stop):" << endl;
    while (true) {
        cin >> input;
        if (input == 0) break;
        arr.push_back(input);
    }
    int count = 0;
    seen[0] = 1;
    for (auto i : arr){
        sum+=i;
        count+=seen[sum];
        seen[sum]++;
    }
    cout<<"number of subarrays: "<<count;
    return 0;
}