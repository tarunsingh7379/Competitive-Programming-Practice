#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

vector<ll> ans(105, 0);

void func(ll l, ll r, vector<ll> &a, ll cnt)
{
    if (l == r)
    {
        ans[a[l]] = cnt;
        return;
    }
    if (l > r)
    {
        return;
    }
    ll ma = -1;
    ll ind = -1;
    for (ll i = l; i <= r; i++)
    {
        if (a[i] > ma)
        {
            ma = a[i];
            ind = i;
        }
    }
    ans[ma] = cnt;
    func(l, ind - 1, a, cnt + 1);
    func(ind + 1, r, a, cnt + 1);
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        func(0, n - 1, a, 0);
        for (auto num : a)
        {
            cout << ans[num] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}