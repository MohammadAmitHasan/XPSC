#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> chessboard(n, vector<int>(m));
        vector<int> diagonal1(n + m - 1, 0);
        vector<int> diagonal2(n + m - 1, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> chessboard[i][j];
                diagonal1[i + j] += chessboard[i][j];
                diagonal2[i - j + m - 1] += chessboard[i][j];
            }
        }

        int max_sum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = diagonal1[i + j] + diagonal2[i - j + m - 1] - chessboard[i][j];
                max_sum = max(max_sum, sum);
            }
        }

        cout << max_sum << endl;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1676/D