#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        string yearStr = to_string(y);
        set<char> digits;

        bool distinct = true;
        for (char digit : yearStr)
        {
            if (digits.count(digit) > 0)
            {
                distinct = false;
                break;
            }
            digits.insert(digit);
        }

        if (distinct)
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}