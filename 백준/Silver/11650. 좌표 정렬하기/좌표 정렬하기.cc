#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if(a.first != b.first)
        return a.first < b.first;
    else {
        return a.second < b.second;
    }
}
int main(){
    int num=0;
    cin >> num;
    vector <pair< int, int >> q;
    int a=0, b=0;
    for(int i=0; i<num; i++){
        scanf("%d %d", &a, &b);
        q.push_back(make_pair(a, b)); 
    }
    sort(q.begin(), q.end(), compare);

    for(int i=0; i<q.size(); i++){
        printf("%d %d\n", q[i].first, q[i].second);
    }
    return 0;
}