#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 1; i <= s.length(); i++)
    {
        if (i % 2 != 0)
            cout << s[i - 1];
    }

    return 0;
}

// https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en