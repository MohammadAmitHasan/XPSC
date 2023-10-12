#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> TGCount;

    for (int i = 0; i < n - 1; i++)
    {
        string twoGram = s.substr(i, 2);
        TGCount[twoGram]++;
    }

    string twoGram;
    int counter = 0;

    for (const auto &pair : TGCount)
    {
        if (pair.second > counter)
        {
            twoGram = pair.first;
            counter = pair.second;
        }
    }

    cout << twoGram << endl;

    return 0;
}