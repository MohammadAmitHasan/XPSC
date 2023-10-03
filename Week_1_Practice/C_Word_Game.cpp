#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<string, vector<int>> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                mp[word].push_back(i);
            }
        }

        int points[3] = {0, 0, 0};

        for (const auto &entry : mp)
        {
            for (int value : entry.second)
            {
                if (entry.second.size() == 1)
                {
                    points[value] += 3;
                }
                if (entry.second.size() == 2)
                {
                    points[value]++;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            cout << points[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1722/C