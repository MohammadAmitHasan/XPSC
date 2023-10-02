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

        vector<map<string, int>> wordCount(3);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string word;
                cin >> word;
                wordCount[i][word]++;
            }
        }

        int points[3] = {0, 0, 0};

        // for (int i = 0; i < 3; i++)
        // {
        for (const auto &kv : wordCount[2])
        {
            if (wordCount[1][kv.first] == 0 && wordCount[0][kv.first] == 0)
            {
                points[0] += 3;
            }
            else if (wordCount[0][kv.first] > 0 && wordCount[1][kv.first] > 0)
            {
            }
            else
            {
                points[0]++;
            }
            cout << kv.first << " " << wordCount[1][kv.first] << " " << wordCount[2][kv.first] << endl;
        }
        cout << points[0];
        // cout << endl;
        // }
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1722/C