#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> alphabetCount(26, 0);

    while (t--)
    {
        int n, ballon = 0;
        cin >> n;
        string s;
        cin >> s;
        for (char st : s)
        {
            if (alphabetCount[st - 'A'] == 0)
                ballon += 2;
            else
                ballon++;
            alphabetCount[st - 'A']++;
        }
        cout << ballon << endl;
        alphabetCount.assign(26, 0);
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1703/B