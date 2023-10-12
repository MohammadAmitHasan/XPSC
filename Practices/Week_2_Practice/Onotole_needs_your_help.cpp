#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<int, int> frequency;

    for (int i = 0; i < N; i++)
    {
        int Pi;
        cin >> Pi;
        frequency[Pi]++;
    }

    int result = -1;
    for (const auto &pair : frequency)
    {
        if (pair.second == 1)
        {
            result = pair.first;
            break;
        }
    }

    cout << result << endl;

    return 0;
}