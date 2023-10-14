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
        vector<string> strings(n);

        // Create a map to store prefixes of strings
        map<string, bool> prefixes;

        for (int i = 0; i < n; i++)
        {
            cin >> strings[i];
            prefixes[strings[i]] = true;
        }

        vector<int> result(n, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < strings[i].length(); j++)
            {
                string prefix = strings[i].substr(0, j);
                string suffix = strings[i].substr(j);

                // Check if both prefix and suffix exist in the map
                if (prefixes.find(prefix) != prefixes.end() && prefixes.find(suffix) != prefixes.end())
                {
                    result[i] = 1;
                    break;
                }
            }
        }

        // Output the binary string
        for (int i = 0; i < n; i++)
        {
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}
