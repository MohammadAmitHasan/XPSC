#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--)
    {
        int n;
        cin >> n;
        bool identical = true;
        string color1, color2;
        cin >> color1 >> color2;
        for (int i = 0; i < color1.length(); i++)
        {
            if ((color1[i] == 'G' || color1[i] == 'B') && color2[i] == 'R')
                identical = false;

            else if ((color2[i] == 'G' || color2[i] == 'B') && color1[i] == 'R')
                identical = false;
        }
        if (identical)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}