#include <iostream>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector <int> result;
        int left = 0;
        for (int i=k-1;i<arr.size();i++){
            vector <int> temp;
            for (int x = left;x<=i;x++){
                temp.push_back(arr[x]);
            }
            int y = *max_element(temp.begin(),temp.end());
            result.push_back(y);
            left++;
        }
        return result;
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
    int size;
    cout<<"enter size: ";
    cin>>size;
    vector <int> result = maxSlidingWindow(arr,size);
}