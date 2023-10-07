#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    while (q--)
    {
        int s, e, sum = 0;
        cin >> s >> e;
        for (int i = s; i <= e; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}