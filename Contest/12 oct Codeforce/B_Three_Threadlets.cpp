#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        vector<ll> v;

        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());

        ll x = v[0];
        ll y = v[1];
        ll z = v[2];

        int count1 = 0, count2 = 0;

        bool flag = false;

        if (y % x != 0 || z % x != 0)
        {
            flag = false;
        }
        else if (y % x == 0 && z % x == 0)
        {
            flag = true;

            while (y >= x)
            {
                y = y / x;
                count1++;
            }

            while (z >= x)
            {
                z = z / x;
                count2++;
            }
        }

        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (count1 <= 3 && count2 <= 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}