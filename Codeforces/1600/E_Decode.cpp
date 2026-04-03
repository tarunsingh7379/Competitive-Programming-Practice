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
        string s;
        cin >> s;
        ll n = s.size();
        vector<ll> prefix(n + 1, 0);
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            sum += (s[i - 1] == '1' ? 1 : -1);
            prefix[i] = sum;
        }
        map<ll, vector<ll>> mp;
        map<ll, ll> sum_right;
        mp[0].push_back(0);
        sum_right[0] += (n + 1);
        for (ll i = 1; i <= n; i++)
        {
            mp[prefix[i]].push_back(i);
            sum_right[prefix[i]] += (n - i + 1);
        }
        ll ans = 0;
        for (auto it : mp)
        {
            ll prefix_sum = it.first;
            ll cur_right = sum_right[prefix_sum];
            for (auto pos : it.second)
            {
                cur_right -= (n - pos + 1);
                ans = (ans + ((pos + 1) * cur_right) % M) % M;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}