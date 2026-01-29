#include <iostream>
#include <vector>
using namespace std;
int findFourTimes(vector <int> arr){
    int result = 0;
    for (int i=0;i<32;i++){
        int count = 0;
        for (int a:arr){
            if(a & (1<<i)){
                count++;
            }
        }
        if(count % 3 == 1){
            result |= (1<<i);
        }
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

    int result = findFourTimes(arr);
    cout<<result;
}