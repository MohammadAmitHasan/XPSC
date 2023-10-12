#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, count = 0;
        cin >> a;
        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            if (val > a)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}