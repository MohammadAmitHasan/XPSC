#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        string pi = "314159265358979323846264338327"; // The first 30 digits of π
        int count = 0;

        for (int i = 0; i < n.length() && i < 30; i++)
        {
            if (n[i] == pi[i])
            {
                count++;
            }
            else
            {
                break; // Stop counting when a mismatch is found
            }
        }

        cout << count << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1790/A