#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string str="";
    cin >> str;
    vector<string> v;
    for(int i=0; i<str.length(); i++){
        string s="";
        s=str.substr(i, i+str.length());
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for(auto a: v){
        cout << a << '\n';
    }
    return 0;
}