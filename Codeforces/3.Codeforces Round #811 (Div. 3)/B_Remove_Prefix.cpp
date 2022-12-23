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
        ll cnt = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (!st.count(a[i]))
            {
                cnt++;
            }
            else
            {
                break;
            }
            st.insert(a[i]);
        }
        cout << n - cnt << endl;
        t--;
    }

    return 0;
}