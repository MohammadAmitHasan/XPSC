#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a = to_string(n);
    while (a.length() < 4)
    {
        a = '0' + a;
    }
    cout << a;
    return 0;
}

// https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en