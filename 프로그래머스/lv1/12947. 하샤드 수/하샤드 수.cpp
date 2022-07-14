#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int n=x;
    int sum=0;
    while(n){
        sum+=n%10;
        n=n/10;
    }
    if(x%sum==0) answer=true;
    else answer=false;
    sum=0;
    return answer;
}