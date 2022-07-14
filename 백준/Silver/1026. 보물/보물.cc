#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    int* A = new int[int(n)];
    int* B = new int[int(n)];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    for(int i=0; i<n; i++){
        cin >> B[i];
    }
    sort(A, A+n);
    sort(B, B+n, greater<>());
    int result=0;
    for(int i=0; i<n; i++){
      result += A[i]*B[i];
    }
    cout << result << endl;
    return 0;
}