#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string b;
    cin >> b;
    ll l = -1e9, r = 1e9;
    for (ll i = 4; i < n; i++)
    {
        bool prevone = true, prevzero = true;
        for (ll j = i - 4; j < i; j++)
        {
            if (b[j] != '1')
            {
                prevone = false;
            }
            if (b[j] != '0')
            {
                prevzero = false;
            }
        }
        ll ma = -1e9, mi = 1e9;
        for (ll j = i - 4; j <= i; j++)
        {
            ma = max(ma, a[j]);
            mi = min(mi, a[j]);
        }
        if (prevone && b[i] == '0')
        {
            r = min(r, mi - 1);
        }
        if (prevzero && b[i] == '1')
        {
            l = max(l, ma + 1);
        }
    }
    cout << l << " " << r << endl;

    return 0;
}