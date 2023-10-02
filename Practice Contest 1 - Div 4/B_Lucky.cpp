#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ticket;
        cin >> ticket;
        int p1 = 0, p2 = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
                p1 += ticket[i] - '0';
            else
                p2 += (ticket[i] - '0');
        }
        if (p1 == p2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}