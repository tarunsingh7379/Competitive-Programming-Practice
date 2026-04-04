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
        cin >> a[i];
    vector<ll> prefix(n, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        prefix[i] = sum;
    }
    ll ind = -1, mi = INT_MAX;
    for (ll i = 0; i <= n - k; i++)
    {
        ll sum = prefix[i + k - 1];
        if (i - 1 >= 0)
            sum -= prefix[i - 1];
        if (sum < mi)
        {
            mi = sum;
            ind = i;
        }
    }
    cout << ind + 1 << endl;

    return 0;
}