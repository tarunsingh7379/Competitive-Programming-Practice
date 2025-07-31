#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_ans(vector<ll> &a, vector<ll> &b)
{
    ll x = 1e15;
    ll n = a.size();
    for (ll i = 0; i < n; i++)
    {
        x = min(x, abs(a[i] - b[i]));
    }
    return x;
}

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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, get_ans(a, b));
            rotate(a.begin(), a.begin() + 1, a.end());
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}