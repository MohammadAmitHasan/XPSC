#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[60] = {0};
        int l;
        cin >> l;
        string s;
        cin >> s;
        if (l != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (char c : s)
            {
                arr[c - 'A']++;
            }

            if (arr['T' - 'A'] == 1 && arr['i' - 'A'] == 1 && arr['m' - 'A'] == 1 && arr['u' - 'A'] == 1 && arr['r' - 'A'] == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
// https://codeforces.com/problemset/problem/1722/A