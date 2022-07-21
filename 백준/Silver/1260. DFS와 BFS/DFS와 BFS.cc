#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> vt[1001];
bool visited[1001];
queue<int> q;

void dfs(int v){
    visited[v] = true;
    cout << v << " ";
    for(int i=0; i<vt[v].size(); i++){
        if(!visited[vt[v][i]]){
            dfs(vt[v][i]);
        }
    }
}

void bfs(int v){
    q.push(v);
    visited[v] = true;
    // cout << v << " ";
    while(!q.empty()){
        v = q.front();
        q.pop();
        cout << v << " ";
        for(int i=0; i<vt[v].size(); i++){
            if(!visited[vt[v][i]]){
                q.push(vt[v][i]);
                visited[vt[v][i]] = true;
                // cout << vt[v][i] << " ";
            }
        }
    }
}

int main(){
    int n=0, m=0, v=0;
    cin >> n >> m >> v;
    
    for(int i=0;  i<m; i++){
        int a=0, b=0;
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    for(int i=1; i<=n; i++){
        sort(vt[i].begin(), vt[i].end());
    }
    dfs(v);
    for(int i=0; i<=n; i++){
        visited[i]=0;
    }
    cout << "\n";
    bfs(v);
    return 0;
}