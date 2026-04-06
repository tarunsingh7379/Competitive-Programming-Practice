#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> suffix(n);
    set<ll> st;
    for (ll i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        suffix[i] = st.size();
    }
    while (q--)
    {
        ll x;
        cin >> x;
        x--;
        cout << suffix[x] << endl;
    }

    return 0;
}