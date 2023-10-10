#include <bits/stdc++.h>

using namespace std;

int main()
{
    int K;
    cin >> K;

    long long sum = 0;

    for (int a = 1; a <= K; ++a)
    {
        for (int b = 1; b <= K; ++b)
        {
            for (int c = 1; c <= K; ++c)
            {
                int min_val = min(a, min(b, c));
                int gcd_value = 1;

                for (int i = 2; i <= min_val; i++)
                {
                    if (a % i == 0 && b % i == 0 && c % i == 0)
                    {
                        gcd_value = i;
                    }
                }

                sum += gcd_value;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
