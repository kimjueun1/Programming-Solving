#include <iostream>
using namespace std;

int t[10001];

void post_order(int start, int end)
{
    if (start >= end)
        return;
    if (start == end - 1)
    {
        cout << t[start] << "\n";
        return;
    }
    int next = start + 1;
    while (next < end)
    {
        if (t[start] < t[next])
            break;
        next++;
    }
    post_order(start + 1, next);
    post_order(next, end);
    cout << t[start] << '\n';
}

int main()
{
    int num;
    int idx = 0;
    while (cin >> num)
    {
        t[idx++] = num;
    }
    post_order(0, idx);
    return 0;
}