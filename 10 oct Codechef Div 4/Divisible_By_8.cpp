#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n, b;
        cin >> n >> b;
        int rem = 0;

        for (char i : b)
        {
            rem = rem * 10 + (i - '0');
            rem %= 8;
        }

        int sz = static_cast<int>(b.size());

        if (sz == 1 && rem)
        {
            cout << "8\n";
        }
        else if (!rem)
        {
            cout << b << '\n';
        }
        else
        {
            int need = (8 - rem) % 8;
            need += (b[sz - 1] - '0');
            b[sz - 1] = (need % 10 + '0');
            cout << b << '\n';
        }
    }

    return 0;
}
