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
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> left(n + 1, 0), right(n + 2, 0);
    ll last = -1;
    for (ll i = 1; i <= n; i++)
    {
        left[i] = left[i - 1];
        if (a[i] == 0)
        {
            left[i] = i;
        }
    }
    for (ll i = n; i >= 1; i--)
    {
        right[i] = right[i + 1];
        if (a[i] == 0)
        {
            right[i] = i;
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        ll d = INT_MAX;
        if (left[i])
        {
            d = min(d, i - left[i]);
        }
        if (right[i])
        {
            d = min(d, right[i] - i);
        }
        cout << d << " ";
    }

    return 0;
}