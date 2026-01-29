#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<int, int> freq;
    int x;

    int input = 0;
    while(input!=-1){
        cin>>input;
        freq[input]++;
    }
    int maxFreq = 0;
    int result1;
    int result2;

    for (auto &p : freq) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
            result1 = p.first;
            result2 = p.second;
        }
    }

    cout << result1 << "-->" << result2;
}
