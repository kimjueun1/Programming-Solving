#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int cnt = 0;
    for(int a=left; a<=right; a++){
        if (a <= 0) {
            return 0;
        }

        for (int i = 1; i <= a / 2; i++) {
            if (a % i == 0) {
                cnt++;
            }
        }
        cnt++;
        if(cnt%2==0) answer+=a;
        else answer-=a;
        cnt=0;
    }
   
    return answer;
}