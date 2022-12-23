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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    ll i = n - 2;
    ll pos = -1;
    while (i >= 0)
    {
        if (a[i] >= a[i + 1])
        {
        }
        else
        {
            pos = i;
            break;
        }
        i--;
    }
    i = pos;
    while (i >= 0)
    {
        if (a[i] <= a[i + 1])
        {
        }
        else
        {
            ans = i + 1;
            break;
        }
        i--;
    }

    cout << ans << endl;

    return 0;
}