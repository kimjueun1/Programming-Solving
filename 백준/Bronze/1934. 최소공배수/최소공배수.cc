#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int GCD(int a, int b){//greatest common denominator (최대공약수)
    if (a % b == 0) 
    	return b;
	else 
    	return GCD(b, a % b);
} 

int main(){
    int x=0;
    cin >> x;
    for(int i=0;i<x;i++){
        int a=0, b=0;
        cin >> a >> b;
        cout << a*b / GCD(a, b) << endl;
    }

    return 0;
}