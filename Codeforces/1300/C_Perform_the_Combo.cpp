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
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll freq[n][26];
        memset(freq, 0, sizeof(freq));
        freq[0][s[0] - 'a'] = 1;
        for (ll i = 1; i < n; i++)
        {
            for (ll j = 0; j < 26; j++)
                freq[i][j] = freq[i - 1][j];
            freq[i][s[i] - 'a']++;
        }
        vector<ll> ans(26, 0);
        for (ll i = 0; i < m; i++)
        {
            ll ind;
            cin >> ind;
            for (ll j = 0; j < 26; j++)
            {
                ans[j] += freq[ind - 1][j];
            }
        }
        for (ll j = 0; j < 26; j++)
        {
            ans[j] += freq[n - 1][j];
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}