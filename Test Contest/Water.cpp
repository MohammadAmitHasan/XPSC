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
        vector<int> heights(N);

        for (int i = 0; i < N; i++)
        {
            cin >> heights[i];
        }

        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max1_index = -1;
        int max2_index = -1;

        for (int i = 0; i < heights.size(); i++)
        {
            if (heights[i] > max1)
            {
                max2 = max1;
                max2_index = max1_index;
                max1 = heights[i];
                max1_index = i;
            }
            else if (heights[i] > max2)
            {
                max2 = heights[i];
                max2_index = i;
            }
        }

        if (max1_index < max2_index)
        {
            cout << max1_index << " " << max2_index << endl;
        }
        else
        {
            cout << max2_index << " " << max1_index << endl;
        }
    }
    return 0;
}