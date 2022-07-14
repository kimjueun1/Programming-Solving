#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str="";
    cin >> str;
    // char alpabet[26]={'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C'};
    char caesar[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for(int i=0; i<str.length(); i++){
            if(str[i]=='A') cout << 'X';
            if(str[i]=='B') cout << 'Y';
            if(str[i]=='C') cout << 'Z';
            else if(str[i]!='A' && str[i]!='B' && str[i]!='C') cout << caesar[str[i]-'D'];
    }
    return 0;
}