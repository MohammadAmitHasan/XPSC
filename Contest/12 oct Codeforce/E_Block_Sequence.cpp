#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int blocks = 0;    // Number of blocks in the beautiful sequence
        int deletions = 0; // Number of deletions needed to make the sequence beautiful

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] <= a[i - 1])
            {
                blocks++;
            }
            else
            {
                deletions++;
            }
        }

        cout << deletions << endl;
    }

    return 0;
}
