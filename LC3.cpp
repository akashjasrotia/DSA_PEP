#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int maxLen(string s){
    if(s.size() <=1){
        return s.size();
    }
    unordered_map <char,int> freq;
    int l=0,ans = INT_MIN;
    for (int r=0;r<s.size();r++){
        freq[s[r]]++;
        while(freq[s[r]]>1){
            freq[s[l]]--;
            l++;
        }
        ans = max(ans,r-l+1);
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    int result = maxLen(s);
    cout<<result;
}