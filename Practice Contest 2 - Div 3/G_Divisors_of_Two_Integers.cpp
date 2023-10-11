#include <bits/stdc++.h>
using namespace std;
vector<int> numbers;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        numbers.push_back(n);
    }
    sort(numbers.begin(), numbers.end());

    int x = numbers[numbers.size() - 1];
    cout << x << " ";

    for (int i = numbers.size() - 1; i >= 0; i--)
    {

        if (numbers[i] == numbers[i - 1])
            continue;

        if (x % numbers[i] == 0)
        {
            numbers.erase(numbers.begin() + i);
        }
    }
    int y = numbers[numbers.size() - 1];
    cout << y << endl;

    return 0;
}