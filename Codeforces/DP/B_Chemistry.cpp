#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for (auto &c : s)
        {
            freq[c - 'a']++;
        }
        int req = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] & 1)
            {
                req++;
            }
        }
        if (n - k == 1)
        {
            cout << "YES" << endl;
        }
        else if (req <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            int x = req - k;
            cout << (x <= 1 ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}