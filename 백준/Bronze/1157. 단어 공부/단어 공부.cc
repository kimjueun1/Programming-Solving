#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str="";
    cin >> str;
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    int cnt[26]={};
    for(int i=0; i<str.length(); i++){
        cnt[str[i]-'A']++;
    }
    int max=0, idx=0, count;
    for(int i=0; i<26; i++){
        if(max < cnt[i]){
            max=cnt[i];
            idx=i;
            count=0;
        }
        if(max == cnt[i]){
            count++;
        }
    }
    if(count>1) cout << "?";
    else cout << char(idx+'A');

    return 0;
}