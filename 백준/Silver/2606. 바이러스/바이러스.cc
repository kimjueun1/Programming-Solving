#include <iostream>
#include <vector>
using namespace std;

vector<int> vt[101];
bool check[101];
int count=0;

void dfs(int u){
    check[u] = true;
    for(int i=0; i<vt[u].size(); i++){
        if(!check[vt[u][i]]){
            dfs(vt[u][i]);
            count++;
        }
    }
}

int main(){
    int n=0, m=0;
    cin >> n >> m;
    
    for(int i=0;  i<m; i++){
        int v=0, e=0;
        cin >> v >> e;
        vt[v].push_back(e);
        vt[e].push_back(v);
    }
    dfs(1);
    cout << count;
    return 0;
}