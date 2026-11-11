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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        sort(a.begin(), a.end());
        for (ll i = 0; i < k - 1; i++)
        {
            ans += a[i];
            ans += (a[i] - 1);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}