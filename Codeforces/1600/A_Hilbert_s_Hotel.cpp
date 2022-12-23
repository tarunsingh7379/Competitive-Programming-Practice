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
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            st.insert(((i + a[i]) % n + n) % n);
        }
        cout << (st.size() == n ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}