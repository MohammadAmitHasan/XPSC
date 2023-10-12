#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    string s;
    cin >> s;

    string targetedString = "";

    int i = 0;
    while (i < s.length())
    {
        if (targetedString.length() >= 3)
        {
            targetedString.erase(0, 1);
        }
        targetedString += s[i];
        if (targetedString == "ABC")
        {
            counter++;
        }
        i++;
    }

    cout << counter;

    return 0;
}

// https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en