#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, toBeAdded = 0;
        cin >> n;
        int boxes[n];

        for (int i = 0; i < n; i++)
        {
            cin >> boxes[i];
        }
        int minValue = boxes[0];

        for (int i = 1; i < n; i++)
        {
            if (boxes[i] < minValue)
            {
                minValue = boxes[i];
            }
        }

        for (int c : boxes)
        {
            if (c != minValue)
                toBeAdded += (c - minValue);
        }

        cout << toBeAdded << endl;
    }

    return 0;
}