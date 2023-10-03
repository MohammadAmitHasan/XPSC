#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, v, counter = 0;
    cin >> x >> y;
    v = x;
    while (v <= y)
    {
        v *= 2;
        counter++;
    }
    cout << counter;
    return 0;
}