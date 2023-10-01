#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double percentage = (a - b) * 100 / a;
    cout << fixed << setprecision(10) << percentage << endl;
    return 0;
}

// https://atcoder.jp/contests/abc193/tasks/abc193_a?lang=en