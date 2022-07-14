#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n=0; cin >> n;
    stack<int> s;
    string cmd;
    for(int i=0; i<n; i++){
        cin >> cmd;
        if(cmd=="push"){
            int num=0;
            cin >> num;
            s.push(num);
        }
        else if(cmd=="top"){
            if(s.size()==0) cout << -1 << endl;
            else cout<<s.top()<<endl;
        }
        else if(cmd=="size"){
            cout<<s.size()<<endl;
        }
        else if(cmd=="empty"){
            if(s.empty()==true)
                cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(cmd=="pop"){
            if(s.size()==0) cout << -1 << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
        }
    }
    return 0;
}