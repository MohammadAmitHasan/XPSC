#include <bits/stdc++.h>
using namespace std;

vector<int> find_array(int n, int k)
{
    if (n % 2 != 0)
    {
        return vector<int>();
    }

    vector<int> arr(n);
    for (int i = 0; i < n / 2; i++)
    {
        arr[i] = i + 1;
        arr[n - i - 1] = k - i;
    }

    return arr;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        int target = k / n; // Calculate the target value

        // Check if the target value is odd
        if (target % 2 != 0)
        {
            cout << "-1" << endl;
            return 0;
        }

        vector<int> result(n);
        int odd_count = 0, even_count = 0;

        for (int i = 0; i < n; i++)
        {

            if (odd_count < n / 2)
            {
                result[i] = target;
                odd_count++;
            }
            else
            {
                result[i] = -target;
                even_count++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}