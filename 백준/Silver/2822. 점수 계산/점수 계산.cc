#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    vector<pair<int, int>> v;
    for(int i=0; i<8; i++){
        int n=0;
        cin >> n;
        v.push_back({n, i});
    }
    sort(v.begin(), v.end(), greater<>());
    int sum=0;
    vector<int> v2;
    for(int i=0; i<5; i++){
        sum+=v[i].first;
        v2.push_back(v[i].second);
    }
    cout << sum << "\n";
    sort(v2.begin(), v2.end());
    for(int i=0; i<5; i++){
        cout << v2[i]+1 << " ";
    }
    return 0;
}