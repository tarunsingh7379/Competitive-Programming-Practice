#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> temp;
        for (ll j = 0; j <= i; j++)
        {
            temp.push_back(0);
        }
        v.push_back(temp);
    }
    ll total = k * (1 << n);
    ll ans = 0;
    v[0][0] = total;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j <= i; j++)
        {
            if (v[i][j] >= (1 << n))
            {
                ans++;
                ll extra = (v[i][j] - (1 << n)) / 2;
                if (i + 1 < n)
                {
                    v[i + 1][j] += extra;
                    v[i + 1][j + 1] += extra;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}