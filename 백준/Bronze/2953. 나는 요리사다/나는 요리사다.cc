#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr1;
    int a=0, b=0, c=0, d=0;
    for(int i=0; i<5; i++){
        cin >> a >> b >> c >> d;
        int sum=0;
        sum += (a+b+c+d);
        arr1.push_back(sum);
    }
    int max = *max_element(arr1.begin(), arr1.end());
    int max_index = max_element(arr1.begin(), arr1.end()) - arr1.begin();
    cout << max_index+1 << " " << max;
    return 0;
}