//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    int i = 0, j = 0;
    queue<long long int> q;
    vector<long long int> result;

    while (j < N)
    {
        if (A[j] < 0)
            q.push(A[j]);
        if (j >= K - 1)
        {
            if (q.size())
                result.push_back(q.front());
            else
                result.push_back(0);
            if (A[i] < 0)
                q.pop();
            i++;
        }
        j++;
    }
    return result;
}

int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}
