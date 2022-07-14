#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int n=0;
    for(int i=0; i<10; i++){
        cin >> n;
        v.push_back(n%42);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout << v.size()<< " ";
    return 0;
}
 
 