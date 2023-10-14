#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int g = a[0];
        for (int i = 1; i < n; i++)
        {
            g = gcd(g, a[i]);
        }

        if (g == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool all_ones = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % g != 0)
                {
                    all_ones = false;
                    break;
                }
            }
            if (all_ones)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
