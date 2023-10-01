#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool isPossible = false;

    while (c > 0)
    {
        if (c % a == 0 || c % b == 0)
        {
            isPossible = true;
            break;
        }
        c -= min(a, b);
    }

    if (isPossible)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

// https://codeforces.com/problemset/problem/633/A