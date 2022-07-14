#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string n="";
    cin >> n;
    int time=0;
    for(int i=0; i<n.length(); i++){
        if(n[i]=='A' || n[i]=='B' || n[i]=='C'){
            time+=2;
        }
        else if(n[i]=='D' || n[i]=='E' || n[i]=='F'){
            time+=3;
        }
        else if(n[i]=='G' || n[i]=='H' || n[i]=='I'){
            time+=4;
        }
        else if(n[i]=='J' || n[i]=='K' || n[i]=='L'){
            time+=5;
        }
        else if(n[i]=='M' || n[i]=='N' || n[i]=='O'){
            time+=6;
        }
        else if(n[i]=='P' || n[i]=='Q' || n[i]=='R' || n[i]=='S'){
            time+=7;
        }
        else if(n[i]=='T' || n[i]=='U' || n[i]=='V'){
            time+=8;
        }
        else if(n[i]=='W' || n[i]=='X' || n[i]=='Y' || n[i]=='Z'){
            time+=9;
        }
        time++;
    }
    cout << time;
    return 0;
}