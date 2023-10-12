#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--)
    {
        int arrayLength;
        cin >> arrayLength;

        vector<int> elements(arrayLength);
        for (int i = 0; i < arrayLength; i++)
        {
            cin >> elements[i];
        }

        map<int, int> elementFrequency;

        for (int i = 0; i < arrayLength; i++)
        {
            elementFrequency[elements[i]]++;
        }

        int deletionsRequired = 0;

        for (auto it = elementFrequency.begin(); it != elementFrequency.end(); it++)
        {
            deletionsRequired += (it->second - 1);
        }

        int maxLength = arrayLength - deletionsRequired;

        if (deletionsRequired % 2 == 1)
        {
            maxLength--;
        }

        cout << maxLength << endl;
    }

    return 0;
}