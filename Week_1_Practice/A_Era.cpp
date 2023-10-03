#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, x = 0;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > (i + 1))
            {
                x = abs((i + 1) - arr[i]);
                ans = max(x, ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1604/A