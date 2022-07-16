#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    int n=0; 
    cin >> n;
    for(int i=0; i<n; i++){
        int num=0;
        cin >> num;
        int originNum=num;
        int reverse=0;
        while(1){
            reverse+=num%10;
            if(num/10==0) break;
            reverse*=10;
            num/=10;
        }
        int sum=originNum+reverse; 
        string s="";
        s=to_string(sum);
        bool answer=true;
        for(int j=0; j<s.size()/2; j++){
            if(s[j]!=s[s.size()-1-j]) {
                answer=false;
            }
        }
        if(answer) cout << "YES\n";
        else cout <<"NO\n";
    }
    return 0;
}