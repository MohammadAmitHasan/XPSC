#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = c, counter = 1;
    bool isPossible = false;

    while (ans <= b)
    {
        ans = c * counter;
        if (ans >= a && ans <= b)
        {
            isPossible = true;
            break;
        }
        counter++;
    }
    if (isPossible)
        cout << ans;
    else
        cout << "-1";

    return 0;
}

// https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en