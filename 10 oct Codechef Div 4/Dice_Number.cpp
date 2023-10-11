#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        vector<int> alice_s = {a1, a2, a3};
        sort(alice_s.rbegin(), alice_s.rend());
        int alice_score = 100 * alice_s[0] + 10 * alice_s[1] + alice_s[2];

        vector<int> bob_s = {b1, b2, b3};
        sort(bob_s.rbegin(), bob_s.rend());
        int bob_score = 100 * bob_s[0] + 10 * bob_s[1] + bob_s[2];

        if (alice_score > bob_score)
        {
            cout << "Alice" << endl;
        }
        else if (alice_score < bob_score)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }

    return 0;
}