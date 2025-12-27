#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll freq, map<ll, ll> &mp, ll k)
{
    ll cnt = 0;
    for (auto num : mp)
    {
        cnt = cnt + (num.second / freq);
    }
    return (cnt >= k);
}

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
    map<ll, ll> mp;
    for (auto num : a)
    {
        mp[num]++;
    }
    ll freq = 1;
    ll l = 1, r = n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, mp, k))
        {
            freq = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    vector<ll> ans(k, 0);
    ll idx = 0;
    for (auto num : mp)
    {
        ll cnt = num.second / freq;
        for (int i = 0; i < cnt && idx < k; i++)
        {
            ans[idx++] = num.first;
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}