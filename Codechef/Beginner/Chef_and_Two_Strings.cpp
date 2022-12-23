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
        string a, b;
        cin >> a >> b;
        ll ans = 0;
        set<ll> st;
        ll n = a.size();
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] != '?' && b[i] != '?')
            {
                ans++;
            }
            if (a[i] == '?')
            {
                st.insert(i);
            }
            if (b[i] == '?')
            {
                st.insert(i);
            }
        }
        cout << ans << " " << (ans + st.size()) << endl;
        t--;
    }

    return 0;
}