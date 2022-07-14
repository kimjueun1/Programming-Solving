#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n=0;
    cin >> n;
    double num=0;
    string str;
    for(int i=0; i<n; i++){
        cin >> num;
        getline(cin, str);
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        for(int i=0; i<str.size(); i++){
            switch (str[i]){
                case '@':
                    num*=3;
                    break;
                case '%':
                    num+=5;
                    break;
                case '#':
                    num-=7;
                    break;
            }
        }
        printf("%.2f\n", num);
        num=0; str="";
    }
    return 0;
}