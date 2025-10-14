#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
prefix[j] - prefix[i-1] <= a[i]

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<ll> prefix(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + b[i];
        }
        vector<ll> cnt(n, 0), extra(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll j = upper_bound(prefix.begin(), prefix.end(), prefix[i] + a[i]) - prefix.begin();
            j--;
            cnt[i]++;
            if (j < n)
            {
                cnt[j]--;
                extra[j] += (a[i] - (prefix[j] - prefix[i]));
            }
        }
        vector<ll> ans(n, 0);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += cnt[i];
            ans[i] = sum * b[i] + extra[i];
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