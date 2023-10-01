#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool isAvailable = false;
    cin >> s;
    vector<int> alphabetCount(26, 0);
    for (char c : s)
    {
        alphabetCount[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabetCount[i] == 0)
        {
            char alphabet = 'a' + i;
            cout << alphabet << endl;
            isAvailable = true;
            break;
        }
    }

    if (!isAvailable)
        cout << "None";

    return 0;
}

// https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en