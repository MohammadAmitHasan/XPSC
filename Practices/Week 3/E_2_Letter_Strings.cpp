#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int pairCount[12][12] = {0}; // Rename 'count' to 'pairCount'
        ll answer = 0;               // Rename 'ans' to 'answer'

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < 2; j++)
            {
                for (char c = 'a'; c <= 'k'; c++)
                {
                    if (c == s[j])
                        continue;

                    string a = s;
                    a[j] = c;
                    answer += pairCount[a[0] - 'a'][a[1] - 'a'];
                }
            }

            pairCount[s[0] - 'a'][s[1] - 'a']++;
        }

        cout << answer << endl;
    }
    return 0;
}
