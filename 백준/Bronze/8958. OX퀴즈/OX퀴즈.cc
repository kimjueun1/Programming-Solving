#include <iostream>

using namespace std;

int main(){
    int n=0;
    cin >> n;
    string str="";
    int cnt=0;
    int result=0;
    for(int j=0; j<n; j++){
        cin >> str;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='O'){
                cnt++;
                result+=cnt;
            }
            else
                cnt=0;
        }
        cout << result << endl;
        str="";
        cnt=0, result=0;
    }
    return 0;
}