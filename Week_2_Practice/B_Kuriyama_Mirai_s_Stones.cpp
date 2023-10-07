#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n + 1], sorted_Arr[n + 1], preArr[n + 1], sortedPreArr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted_Arr[i] = arr[i];

        if (i == 0)
            preArr[i] = arr[i];
        else
            preArr[i] = preArr[i - 1] + arr[i];
    }
    sort(sorted_Arr, sorted_Arr + n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            sortedPreArr[i] = sorted_Arr[i];
        }
        else
        {
            sortedPreArr[i] = sortedPreArr[i - 1] + sorted_Arr[i];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int t, l, r, sum = 0;
        cin >> t >> l >> r;

        if (t == 1)
        {
            if (l == 1)
                cout << preArr[r - 1] << endl;
            else
                cout << preArr[r - 1] - preArr[l - 2] << endl;
        }
        else
        {
            if (l == 1)
                cout << sortedPreArr[r - 1] << endl;
            else
            {
                cout << sortedPreArr[r - 1] - sortedPreArr[l - 2] << endl;
            }
        }
    }

    return 0;
}