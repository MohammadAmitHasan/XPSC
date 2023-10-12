#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, moveNo;
        cin >> size;
        int digitArr[size + 1];
        for (int i = 0; i < size; i++)
        {
            cin >> digitArr[i];
        }

        string moves[size + 1];
        for (int i = 0; i < size; i++)
        {
            cin >> moveNo;
            cin >> moves[i];
        }

        for (int i = 0; i < size; i++)
        {
            for (char move : moves[i])
            {
                if (move == 'D')
                {
                    if (digitArr[i] < 9)
                        digitArr[i]++;
                    else
                        digitArr[i] = 0;
                }
                else
                {
                    if (digitArr[i] > 0)
                        digitArr[i]--;
                    else
                        digitArr[i] = 9;
                }
            }
            cout << digitArr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}