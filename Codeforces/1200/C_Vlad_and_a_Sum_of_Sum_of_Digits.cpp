#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    ll ans[200005];
    ll sum = 0;
    for (ll i = 0; i <= 200000; i++)
    {
        ll x = i;
        while (x)
        {
            sum += x % 10;
            x /= 10;
        }
        ans[i] = sum;
    }

    while (t)
    {
        ll n;
        cin >> n;
        cout << ans[n] << endl;
        t--;
    }

    return 0;
}