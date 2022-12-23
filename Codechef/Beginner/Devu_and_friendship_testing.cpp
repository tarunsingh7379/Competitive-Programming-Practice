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
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        cout << st.size() << endl;
        t--;
    }

    return 0;
}