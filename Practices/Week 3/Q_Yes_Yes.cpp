#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string mainS = "Yes";
    for (int i = 0; i < 20; i++)
    {
        mainS += "Yes";
    }

    while (t--)
    {
        string s;
        cin >> s;

        if (mainS.find(s) != string::npos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// https://codeforces.com/problemset/problem/1759/A