#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> temp;
    for (ll i = 1; i < n; i++)
    {
        temp.push_back(a[i] - a[i - 1] - 1);
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    ll ans = a[n - 1] - a[0] + 1;
    for (int i = 0; i < k - 1; i++)
    {
        ans -= temp[i];
    }
    cout << ans << endl;

    return 0;
}