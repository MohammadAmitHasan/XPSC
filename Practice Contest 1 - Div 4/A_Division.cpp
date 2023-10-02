#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ratting;
    while (t--)
    {
        cin >> ratting;

        if (ratting >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (ratting >= 1600 && ratting <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (ratting >= 1400 && ratting <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (ratting <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}