#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n=0;
    cin >> n;
    for(int i=0; i<n; i++){
        vector<int> v;
        for(int j=0; j<10; j++){
            int num=0;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end(), greater<>());
        cout << v[2] << '\n';
    }
    return 0;
}