#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> coins(N);

        // Read coin values
        for (int i = 0; i < N; i++)
        {
            cin >> coins[i];
        }

        int minDifference = numeric_limits<int>::max();
        int subsetSum = 0;

        // Calculate the total sum of all coins
        for (int i = 0; i < N; i++)
        {
            subsetSum += coins[i];
        }

        // Generate all possible subsets of coins
        for (int i = 0; i < (1 << N); i++)
        {
            int sumChinki = 0;
            int sumMinki = 0;

            // Check each bit to decide which coins go to Chinki or Minki
            for (int j = 0; j < N; j++)
            {
                if (i & (1 << j))
                {
                    sumChinki += coins[j];
                }
                else
                {
                    sumMinki += coins[j];
                }
            }

            // Calculate the absolute difference between the sums
            int diff = abs(sumChinki - sumMinki);

            // Update the minimum difference if necessary
            minDifference = min(minDifference, diff);
        }

        cout << minDifference << endl;
    }
    return 0;
}