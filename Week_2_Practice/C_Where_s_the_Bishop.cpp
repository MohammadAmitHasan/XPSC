#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }

        int x = -1, y = -1;
        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (s[i][j] == '#' && s[i - 1][j - 1] == '#' && s[i - 1][j + 1] == '#' && s[i + 1][j - 1] == '#' && s[i + 1][j + 1] == '#')
                {
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
            if (x != -1)
                break;
        }
        cout << x << " " << y << endl;
    }

    return 0;
}