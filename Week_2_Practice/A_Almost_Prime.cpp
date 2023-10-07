#include <bits/stdc++.h>
using namespace std;

int countDistinctPrimeDivisors(int n)
{
    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            count++;
        }
    }
    if (n > 1)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    int almostPrimeCount = 0;

    for (int i = 1; i <= n; i++)
    {
        if (countDistinctPrimeDivisors(i) == 2)
        {
            almostPrimeCount++;
        }
    }

    cout << almostPrimeCount << endl;

    return 0;
}