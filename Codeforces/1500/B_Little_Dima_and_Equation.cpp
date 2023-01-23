#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll power(ll base, ll n)
{
    ll ans = 1;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base);
        }
        else
        {
            n = n / 2;
            base = (base * base);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;

    vector<ll> ans;
    for (ll i = 1; i <= 81; i++)
    {
        ll x = b * power(i, a) + c;
        ll sum = 0;
        ll n = x;
        while (n)
        {
            sum += (n % 10);
            n /= 10;
        }
        if (sum == i && x <= 1e9)
        {
            ans.push_back(x);
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}