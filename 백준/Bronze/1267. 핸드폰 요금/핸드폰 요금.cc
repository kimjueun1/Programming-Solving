#include <iostream>
using namespace std;
int main(){
    int n=0;
    cin >> n;
    int y=0, m=0;
    for(int i=0; i<n; i++){
        int time=0;
        cin >> time;
        y+=(time/30+1)*10;
        m+=(time/60+1)*15;
    }
    if(y==m) cout << "Y M " << y << endl;
    else if(y>m) cout << "M " << m << endl;
    else if(y<m) cout << "Y " << y << endl;
    return 0;
}