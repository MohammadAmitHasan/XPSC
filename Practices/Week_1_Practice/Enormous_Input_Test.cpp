#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % k == 0)
            counter++;
    }
    cout << counter;

    return 0;
}