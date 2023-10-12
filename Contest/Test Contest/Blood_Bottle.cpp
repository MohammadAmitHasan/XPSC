#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            count++;
        else
        {
            if (count != 0)
                v.push_back(count);
            count = 0;
        }
    }

    if (count != 0)
    {
        v.push_back(count);
    }
    if (v.size() == 0)
        v.push_back(0);

    long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (1 % 2 == 0)
        {
            sum += v[i];
        }
        cout << sum;
    }

    return 0;
}