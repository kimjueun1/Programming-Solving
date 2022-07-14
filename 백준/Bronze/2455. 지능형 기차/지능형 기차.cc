#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int out=0, in=0, sum=0;
    vector<int> v;
    for(int i=0; i<4; i++){
        cin >> out >> in;
        sum-=out;
        sum+=in;
        v.push_back(sum);
    }
    int max = *max_element(v.begin(), v.end());
    cout << max;
    return 0;
}