#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (pow(a, 2) + pow(b, 2) < pow(c, 2))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

// https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en