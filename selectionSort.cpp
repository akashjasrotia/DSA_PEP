#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int input = 0;
    vector<int> arr;
    cout << "Enter numbers between 1 to n where n is size of array and -1 to stop inputting:" << endl;
    while (input != -1)
    {
        cin >> input;
        if (input != -1)
        {
            arr.push_back(input);
        }
    }

    for (int i=0;i<arr.size()-1;i++){
        int min = i;
        for (int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for (int i : arr){
        cout<<i<<" ";
    }
}