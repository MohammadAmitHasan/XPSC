#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sequence[N + 1];

    for (int i = 0; i < N; i++)
    {
        cin >> sequence[i];
    }

    vector<pair<int, int>> count;

    // Initialize count vector with pairs (2 to 1000, 0)
    for (int i = 0; i <= 1000; i++) // Changed the loop condition here
    {
        count.push_back(make_pair(i, 0));
    }

    pair<int, int> ans = make_pair(-1, INT_MIN);

    for (int i = 0; i < N; i++) // Changed the loop condition here
    {
        for (int j = 2; j <= 1000; j++) // Iterate up to 1000 elements
        {
            if (count[j].first > sequence[i])
                break;
            else if (sequence[i] % count[j].first == 0)
                count[j].second++;
        }
    }

    for (int i = 2; i <= 1000; i++)
    {
        if (count[i].second > ans.second)
            ans = make_pair(count[i].first, count[i].second);
    }
    cout << ans.first << endl;

    return 0;
}

// https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en