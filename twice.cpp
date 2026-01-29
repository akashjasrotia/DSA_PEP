#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> arr;
    unordered_map <int,int> freq;
    for (int i = 0; i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    for (auto i : arr){
        freq[i]++;
    }
    for (auto i : freq){
        if(i.second == 2){
            cout<<i.first<<" ";
        }
    }
    return 0;
}