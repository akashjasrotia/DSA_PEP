#include <iostream>
#include <string>
using namespace std;
bool pal(string s,int l,int r){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
bool palindrome(string s){
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else {
            return pal(s,l+1,r) || pal(s,l,r-1);
        }
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    bool result = palindrome(s);
    cout<<result;
}