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
    ll ans = 0, cnt = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            ans += (cnt * (cnt + 1)) / 2;
            cnt = 1;
        }
    }
    ans += (cnt * (cnt + 1)) / 2;
    cout << ans << endl;

    return 0;
}