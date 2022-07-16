#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    queue<int> q;
    for(int i=1; i<=n; i++){
        q.push(i);
    }
    while(1){
        if(q.size()==1) break;
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
    return 0;
}