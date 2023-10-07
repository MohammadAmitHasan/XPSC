#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int spellCount = 0;

    while (n.size() > 1)
    {
        int sum = 0;

        for (char digit : n)
        {
            sum += (digit - '0');
        }
        n = to_string(sum);

        spellCount++;
    }

    cout << spellCount << endl;

    return 0;
}