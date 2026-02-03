#include <iostream>
#include<string>
using namespace std;
// int findNthDigit(int n) {
//     int digit = 1;
//     long count = 9;
//     long start = 1;
//     while (n > digit * count) {
//         n -= digit * count;
//         digit++;
//         count *= 10;
//         start *= 10;
//     }
//     start += (n - 1) / digit;
//     string s = to_string(start);
//     return s[(n - 1) % digit] - '0';
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int result = findNthDigit(n);
//     cout<<result;
// }

int main(){
    int n;
    cin>>n;
    string s="";
    for (int i=1;i<=n;i++){
        s+=to_string(i);
    }
    cout<<s[n-1];
}