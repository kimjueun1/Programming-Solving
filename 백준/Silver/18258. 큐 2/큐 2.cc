#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n=0; cin >> n;
    queue<int> q;
    string cmd;
    for(int i=0; i<n; i++){
        cin >> cmd;
        if(cmd=="push"){
            int num=0;
            cin >> num;
            q.push(num);
        }
        else if(cmd=="front"){
            if(q.size()==0) cout << -1 << '\n';
            else cout<<q.front()<<'\n';
        }
        else if(cmd=="back"){
            if(q.size()==0) cout << -1 << '\n';
            else cout<<q.back()<<'\n';
        }
        else if(cmd=="size"){
            cout<<q.size()<<'\n';
        }
        else if(cmd=="empty"){
            if(q.empty()==true) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(cmd=="pop"){
            if(q.size()==0) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
    }
    return 0;
}