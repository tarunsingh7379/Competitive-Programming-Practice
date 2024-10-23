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
    ll l, r;
    cin >> l >> r;
    set<ll> st;
    for (ll i = 0; i < 31; i++)
    {
        for (ll j = 0; j < 20; j++)
        {
            ll x = power(2, i) * power(3, j);
            st.insert(x);
        }
    }
    vector<ll> v(st.begin(), st.end());
    cout << (upper_bound(v.begin(), v.end(), r) - v.begin()) - (lower_bound(v.begin(), v.end(), l) - v.begin()) << endl;
    return 0;
}