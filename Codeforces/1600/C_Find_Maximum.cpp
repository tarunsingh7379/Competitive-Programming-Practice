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
    string s;
    cin >> s;
    vector<ll> prefix(n, 0);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    ll sum = 0, ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ll temp = sum;
            if (i - 1 >= 0)
            {
                temp += prefix[i - 1];
            }
            ans = max(ans, temp);
            sum += a[i];
        }
    }
    ans = max(ans, sum);
    cout << ans << endl;

    return 0;
}