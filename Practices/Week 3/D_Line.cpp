#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long totalSum = 0;        // Rename 'sum' to 'totalSum'
        vector<long long> differences; // Rename 'v' to 'differences'

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                differences.push_back((n - 1 - i) - i);
                totalSum += i;
            }
            else
            {
                differences.push_back(i - (n - 1 - i));
                totalSum += n - 1 - i;
            }
        }

        sort(differences.begin(), differences.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (differences[i] > 0)
            {
                totalSum += differences[i];
            }

            cout << totalSum << " ";
        }

        cout << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1722/D