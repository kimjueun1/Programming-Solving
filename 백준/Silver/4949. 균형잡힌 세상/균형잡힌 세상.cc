#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    while(1){
        stack<char> s;
        string str="";
        getline(cin, str);
        bool answer=true;
        if(str.length()==1 && str[0]=='.'){
            answer=true;
            break;
        }
        for(int i=0; i<str.length(); i++){
            if(str[i]=='(' || str[i]=='['){
                s.push(str[i]);
            }
            if(str[i]==')'){
                if(s.empty() || s.top()=='[')
                    answer=false;
                else s.pop();
            }
            if(str[i]==']'){
                if(s.empty() || s.top()=='(')
                    answer=false;
                else s.pop();
            }
        }
        if(s.empty() && answer) cout <<"yes"<<'\n';
        else cout << "no" << '\n';
    }
    return 0;
}