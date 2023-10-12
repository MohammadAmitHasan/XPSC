#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    int change = 0;
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
            change++;
    }
    cout << change;

    return 0;
}

// https://atcoder.jp/contests/abc172/submissions/me