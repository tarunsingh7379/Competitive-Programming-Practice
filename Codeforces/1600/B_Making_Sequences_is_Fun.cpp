#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void build(string &s, vector<ll> &freq)
{
    ll p = 9;
    ll pow = 1;
    for (ll i = 0; i < s.size() - 1; i++)
    {
        freq[i + 1] += p;
        p *= 10;
        pow *= 10;
    }
    freq[s.size()] += (stoll(s) - pow + 1);
}

bool check(ll len, ll start, ll w, ll k)
{
    ll l = start, r = start + len - 1;
    l--;
    string s = to_string(l), t = to_string(r);
    vector<ll> freq1(20, 0), freq2(20, 0);
    build(s, freq1);
    build(t, freq2);
    ll cost = 0;
    for (ll i = 1; i < 20; i++)
    {
        ll cnt = freq2[i] - freq1[i];
        cost = cost + cnt * i * k;
    }
    return cost <= w;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll w, m, k;
    cin >> w >> m >> k;
    ll l = 0, r = w / k + 1;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, m, w, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}