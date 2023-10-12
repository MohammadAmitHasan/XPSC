#include <bits/stdc++.h>
using namespace std;

bool cmp(string &x, string &y)
{
    return x.length() < y.length();
}

int main()
{
    int n;
    cin >> n;

    string words[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    sort(words, words + n, cmp);

    for (int i = 0; i < n - 1; i++)
    {
        if (words[i + 1].find(words[i]) == string::npos)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}