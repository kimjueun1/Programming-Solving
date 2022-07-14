#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s="";
    cin >> s;
    
    for(int i=0; i<s.size(); i++){
        sort(s.begin(), s.end(), greater<char>());
    }
    cout << s;
    return 0;
}