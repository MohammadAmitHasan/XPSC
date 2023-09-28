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
        vector<int> profit(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> profit[i];
        }

        auto minIter = min_element(profit.begin(), profit.end());
        int minIndex = distance(profit.begin(), minIter);

        profit.erase(profit.begin() + minIndex);
        int sum = std::accumulate(profit.begin(), profit.end(), 0);
        cout << sum << endl;
    }
    return 0;
}