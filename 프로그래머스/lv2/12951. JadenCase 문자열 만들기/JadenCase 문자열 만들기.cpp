#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    s[0]=toupper(s[0]);
    // cout<<s[0];
    for(int i=1; i<s.length(); i++){
        if(s[i-1]==' '){
            s[i]= toupper(s[i]);
            // cout << s[i];
        }
        else s[i]=tolower(s[i]);
   
    }
    // cout<<s;
    answer=s;
    return answer;
}