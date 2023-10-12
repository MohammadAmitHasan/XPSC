#include <bits/stdc++.h>
using namespace std;

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

        int rCount = 0, bCount = 0, wCount = 0;

        for (char c : s)
        {
            if (c == 'R')
            {
                rCount++;
            }
            else if (c == 'B')
            {
                bCount++;
            }
            else
            {
                wCount++;
            }
        }
    }

    return 0;
}