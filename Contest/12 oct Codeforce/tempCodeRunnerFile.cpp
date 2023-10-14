#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long lowest = min(a, min(b, c));

        if ((a % lowest == 0) && (b % lowest == 0) && (c % lowest == 0))
        {
            // cout << a / lowest << " " << b / lowest << " " << c / lowest << endl;
            if ((a / lowest <= 3) && (b / lowest <= 3) && (c / lowest <= 3))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
