#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(string pat, string txt)
    {
        int patLen = pat.length();
        int txtLen = txt.length();

        if (txtLen < patLen)
        {
            return 0;
        }

        vector<int> patCount(26, 0);
        vector<int> txtCount(26, 0);

        for (int i = 0; i < patLen; ++i)
        {
            patCount[pat[i] - 'a']++;
            txtCount[txt[i] - 'a']++;
        }

        int count = 0;

        for (int i = patLen; i < txtLen; ++i)
        {
            if (patCount == txtCount)
            {
                count++;
            }

            txtCount[txt[i - patLen] - 'a']--;
            txtCount[txt[i] - 'a']++;
        }

        if (patCount == txtCount)
        {
            count++;
        }

        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}

// https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1