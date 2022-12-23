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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> used(n, 0);
        ll x = 0;
        vector<ll> ans;
        for (ll i = 0; i < min(32LL, n); i++)
        {
            ll ma = 0;
            ll pos = -1;
            for (ll j = 0; j < n; j++)
            {
                if (used[j])
                {
                    continue;
                }
                if ((x | a[j]) > ma)
                {
                    ma = x | a[j];
                    pos = j;
                }
            }
            x = ma;
            ans.push_back(a[pos]);
            used[pos] = 1;
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        for (ll i = 0; i < n; i++)
        {
            if (!used[i])
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}