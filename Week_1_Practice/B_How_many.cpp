#include <bits/stdc++.h>
using namespace std;
int main()
{
    int S, T;
    cin >> S >> T;

    int count = 0;

    for (int a = 0; a <= S; a++)
    {
        for (int b = 0; b <= S; b++)
        {
            for (int c = 0; c <= S; c++)
            {
                if (a * b * c <= T && a + b + c <= S)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}

// https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en