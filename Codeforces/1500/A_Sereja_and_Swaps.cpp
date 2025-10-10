#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, kk;
    cin >> n >> kk;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = -1e17;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i; j < n; j++)
        {
            vector<ll> v1, v2;
            for (ll k = 0; k < n; k++)
            {
                if (k >= i && k <= j)
                    v1.push_back(a[k]);
                else
                    v2.push_back(a[k]);
            }
            sort(v1.begin(), v1.end());
            ll sum = 0;
            for (auto num : v1)
            {
                sum += num;
            }
            ans = max(ans, sum);
            if (v2.size() > 0)
            {
                sort(v2.begin(), v2.end());
                ll ind1 = 0, ind2 = v2.size() - 1;
                for (ll op = 0; op < kk; op++)
                {
                    if (ind1 < v1.size() && ind2 >= 0)
                    {
                        sum -= v1[ind1++];
                        sum += v2[ind2--];
                    }
                    ans = max(ans, sum);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}