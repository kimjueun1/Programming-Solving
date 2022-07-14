#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a=0, b=0, c=0;
    string result="";
    cin >> a;
    cin >> b;
    cin >> c;
    result = to_string(a*b*c);
    int arr[10] ={0};
    for(int i=0; i<result.length(); i++){
        arr[result[i]-'0']++;
    }
    for(int i=0; i<10; i++)
        cout << arr[i] << endl;
    return 0;
}