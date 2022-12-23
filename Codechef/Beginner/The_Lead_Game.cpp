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
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (ll i = 1; i < n; i++)
    {
        a[i] = a[i] + a[i - 1];
        b[i] = b[i] + b[i - 1];
    }
    ll ma = INT_MIN;
    ll w = -1;
    for (ll i = 0; i < n; i++)
    {
        ll diff;
        if (a[i] > b[i])
        {
            diff = a[i] - b[i];
            if (diff > ma)
            {
                ma = diff;
                w = 1;
            }
        }
        else
        {
            diff = b[i] - a[i];
            if (diff > ma)
            {
                w = 2;
                ma = diff;
            }
        }
    }

    cout << w << " " << ma << endl;

    return 0;
}