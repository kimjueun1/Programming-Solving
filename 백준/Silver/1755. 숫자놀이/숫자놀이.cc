#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int m=0, n=0;
    cin >> m >> n;
    string arr[11]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<pair<string, int>> v;
    string s="";
    for(int i=m; i<=n; i++){
        if(i<10){
            s=arr[i];
            v.push_back({s, i});
        }
        else {
            s=arr[i/10]+" " + arr[i%10];
            v.push_back({s, i});
        }
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << " ";
        if(i%10==9) cout << "\n";
    }
    return 0;
}