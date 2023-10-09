#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string a;
    cin >> a;
    int n;
    cin >> n;
    string s1, s2;
    int hour = (a[0] - '0') * 10 + (a[1] - '0');
    int minit = (a[3] - '0') * 10 + (a[4] - '0');

    int p = hour, q = minit, c = 0;
    while (1)
    {
        minit += n;
        hour += (minit / 60);
        minit %= 60;
        hour %= 24;

        int u, v, w, x;
        u = hour % 10;
        w = (minit / 10) % 10;
        v = (hour / 10) % 10;
        x = minit % 10;

        if (u == w && v == x)
            c++;
        if (hour == p && minit == q)
            break;
    }
    cout << c << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}