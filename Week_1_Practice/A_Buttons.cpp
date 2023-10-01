#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int max_coin = 0;
    for (int i = 0; i < 2; i++)
    {
        if (a > b)
        {
            max_coin += a;
            a--;
        }
        else
        {
            max_coin += b;
            b--;
        }
    }

    cout << max_coin;

    return 0;
}

// https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en