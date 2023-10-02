#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        bool isPossible1 = true, isPossible2 = true;
        cin >> n;
        int numbers[n];
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int parity1 = numbers[0] % 2;
        int parity2 = numbers[1] % 2;

        for (int i = 0; i < n; i += 2)
        {
            if (numbers[i] % 2 != parity1)
            {
                isPossible1 = false;
                break;
            }
        }

        for (int i = 1; i < n; i += 2)
        {
            if (numbers[i] % 2 != parity2)
            {
                isPossible1 = false;
                break;
            }
        }

        if (isPossible1 && isPossible2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}