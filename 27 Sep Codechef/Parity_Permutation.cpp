#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

long long countPermutations(int N, int K, vector<int> &A)
{
    vector<int> odd, even;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even.push_back(A[i]);
        }
        else
        {
            odd.push_back(A[i]);
        }
    }

    int odd_count = odd.size();
    int even_count = even.size();

    // Calculate the number of valid permutations for odd elements
    long long odd_permutations = 0;
    for (int i = 0; i < odd_count; i++)
    {
        for (int j = i + 1; j < odd_count; j++)
        {
            if ((odd[i] + odd[j]) % 2 == K)
            {
                odd_permutations++;
            }
        }
    }

    // Calculate the number of valid permutations for even elements
    long long even_permutations = 0;
    for (int i = 0; i < even_count; i++)
    {
        for (int j = i + 1; j < even_count; j++)
        {
            if ((even[i] + even[j]) % 2 == K)
            {
                even_permutations++;
            }
        }
    }

    // Calculate the total number of permutations
    long long total_permutations = 1;
    for (int i = 1; i <= N; i++)
    {
        total_permutations = (total_permutations * i) % MOD;
    }

    // Calculate the result modulo MOD
    long long result = (total_permutations * odd_permutations * even_permutations) % MOD;
    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        long long ans = countPermutations(N, K, A);
        cout << ans << endl;
    }

    return 0;
}
