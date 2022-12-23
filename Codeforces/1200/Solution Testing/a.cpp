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
    for (ll i = n - 2; i >= 1; i--)
    {
        if (a[i] < a[i - 1] && a[i] <= a[i + 1])
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}