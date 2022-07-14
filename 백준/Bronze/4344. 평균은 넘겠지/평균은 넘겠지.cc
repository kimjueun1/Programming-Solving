#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int score[1000];
        double c=0;
        cin >> c;
        for(int i=0; i<c; i++){
            cin >> score[i];
        }
        double aver=0, sum=0;
        for(int i=0; i<c; i++){
            sum += score[i];
        }
        aver = sum / c;
        int count=0;
        for(int i=0; i<c; i++){
            if(aver<score[i]) count++;
        }
        double result= 0;
        result = count / double(c) * 100;
        printf("%.3f%\n", result);
    }
}