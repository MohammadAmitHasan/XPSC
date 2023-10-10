#include <bits/stdc++.h>
using namespace std;

int com(string x, string y)
{
    int res = 0;
    for (int i = 0; i < x.size(); i++)
    {
        res += abs(x[i] - y[i]);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, com(s[i], s[j]));
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
