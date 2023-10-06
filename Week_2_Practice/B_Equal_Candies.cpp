#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int minV = INT_MAX, n, total = 0;
        cin >> n;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            minV = min(arr[i], minV);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != minV)
                total += (arr[i] - minV);
        }

        cout << total << endl;
    }
    return 0;
}