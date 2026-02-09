#include <iostream>
#include <vector>
using namespace std;
int partition(vector <int> &arr,int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(vector <int> &arr,int low,int high){
    if(low<high){
        int x = partition(arr,low,high);
        quickSort(arr,low,x-1);
        quickSort(arr,x+1,high);
    }
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
    quickSort(arr,0,arr.size()-1);
    for (int i:arr){
        cout<<i<<" ";
    }
}