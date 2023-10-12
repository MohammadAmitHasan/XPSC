#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    long long N;
    int K;

    cin >> N >> K;

    // Convert base
    string baseK = "";
    while (N > 0)
    {
        int digit = N % K;
        baseK = to_string(digit) + baseK;
        N /= K;
    }

    int numberOfDigits = baseK.size();

    cout << numberOfDigits << endl;

    return 0;
}