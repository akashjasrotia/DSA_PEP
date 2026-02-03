#include <iostream>
#include <string>
#include <climits>
using namespace std;
string minWindow(string s,string t){
    if(s.size()<t.size()){
        return "";
    }
    int freq[256] = {0};
    for (char i:t){
        freq[i]++;
    }
    int l=0,r=0;
    int count=t.size();
    int start=0;
    int minLen = INT_MAX;
    while(r<s.size()){
        if(freq[s[r]]>0){
            count--;
        }
        freq[s[r]]--;
        while(count==0){
            if((r-l+1)<minLen){
                minLen = r-l+1;
                start = l;
            }
            freq[s[l]]++;
            if(freq[s[l]]>0){
                count++;
            }
            l++;
        }
        r++;
    }
    return minLen == INT_MAX ? "" : s.substr(start,minLen);

}
int main(){
    string s,t;
    cout<<"Enter source string: ";
    cin>>s;
    cout<<"Enter target string: ";
    cin>>t;
    string result = minWindow(s,t);
    cout<<result;
    return 0;
}