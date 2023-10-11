#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int L, v, STl, STr;
        cin >> L >> v >> STl >> STr;

        int lanterns = L / v;
        int blocked = STr / v - (STl - 1) / v;

        int visible = lanterns - blocked;

        cout << visible << endl;
    }

    return 0;
}