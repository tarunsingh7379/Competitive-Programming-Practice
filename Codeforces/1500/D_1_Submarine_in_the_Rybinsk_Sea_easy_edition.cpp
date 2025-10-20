#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
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
    for (ll i = 0; i < n; i++)
    {
        string s = to_string(a[i]);
        ll pow = 1;
        ll sum = 0;
        for (int j = s.size() - 1; j >= 0; j--)
        {
            sum = (sum + ((pow * (s[j] - '0')) % M)) % M;
            pow = (pow * 100) % M;
        }
        pow = 10;
        for (int j = s.size() - 1; j >= 0; j--)
        {
            sum = (sum + ((pow * (s[j] - '0')) % M)) % M;
            pow = (pow * 100) % M;
        }
        sum = (n * sum) % M;
        ans = (ans + sum) % M;
    }
    cout << ans << endl;

    return 0;
}