#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input;
    vector<int> arr;
    vector<vector<int>> arr1;

    cout << "Enter numbers (0 to stop):" << endl;
    while (true) {
        cin >> input;
        if (input == 0) break;
        arr.push_back(input);
    }

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int sum = 0;
        vector<int> temp;
        

        for (int j = i; j < n; j++) {
            sum += arr[j];
            temp.push_back(arr[j]);

            if (sum == 0) {
                arr1.push_back(temp);
            }
        }
    }
    cout<<"Subarrays with sum 0 found: " << arr1.size() << endl;

}
