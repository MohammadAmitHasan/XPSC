#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, counter = 0;
        string as, bs;
        cin >> a >> b >> as >> bs;
        bool isPossible = false;

        if (as.find(bs) != string::npos)
        {
            cout << 0 << endl;
        }
        else
        {
            as = as + as;
            counter++;
            if (as.find(bs) != string::npos)
            {
                isPossible = true;
            }
            else
            {
                while (as.length() <= bs.length() * 2)
                {
                    as = as + as;
                    counter++;
                    if (as.find(bs) != string::npos)
                    {
                        isPossible = true;
                        break;
                    }
                }
            }

            if (isPossible)
            {
                // cout << as << " " << counter << endl;
                cout << counter << endl;
            }
            else
                cout << -1 << endl;
        }
    }
    return 0;
}