#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    set<ll> st;
    for (ll i = 2; i <= 60; i++)
    {
        ll x = (1LL << i) - 1;
        for (ll j = 0; j < i; j++)
        {
            ll y = x - (1LL << j);
            if (y >= a && y <= b && (y != ((1LL << (i - 1)) - 1)))
            {
                st.insert(y);
            }
        }
    }
    cout << st.size() << endl;

    return 0;
}