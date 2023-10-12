#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = -1;
        cin >> n;
        int arr[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            arr[in]++;
        }
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] >= 3)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}