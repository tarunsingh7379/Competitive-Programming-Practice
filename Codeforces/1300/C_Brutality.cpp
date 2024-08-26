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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    ll ans = 0;

    vector<ll> v;
    v.push_back(a[0]);
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            v.push_back(a[i]);
        }
        else
        {
            sort(v.begin(), v.end());
            ll cnt = k;
            for (int j = v.size() - 1; j >= 0 && cnt > 0; j--, cnt--)
            {
                ans += v[j];
            }
            v.clear();
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end());
    ll cnt = k;
    for (int j = v.size() - 1; j >= 0 && cnt > 0; j--, cnt--)
    {
        ans += v[j];
    }
    cout << ans << endl;

    return 0;
}