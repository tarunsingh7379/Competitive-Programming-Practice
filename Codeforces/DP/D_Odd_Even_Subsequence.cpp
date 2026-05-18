#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll val, int n, int k, vector<int> &a)
{
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if ((cnt + 1) % 2 == 0)
        {
            cnt++;
        }
        else if (a[i] <= val)
        {
            cnt++;
        }
    }
    if (cnt >= k)
        return 1;
    cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if ((cnt + 1) % 2 != 0)
        {
            cnt++;
        }
        else if (a[i] <= val)
        {
            cnt++;
        }
    }
    return (cnt >= k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 1, r = 1e9;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, n, k, a))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}