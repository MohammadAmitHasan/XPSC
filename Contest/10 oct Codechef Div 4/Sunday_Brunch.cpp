#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int max_neighbours = X / Y;
        if (max_neighbours > 20)
            cout << 20 << endl;
        else
            cout << max_neighbours << endl;
    }

    return 0;
}