#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n=0;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int num=0;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto a: v){
        cout << a << ' ';
    }
    return 0;
}