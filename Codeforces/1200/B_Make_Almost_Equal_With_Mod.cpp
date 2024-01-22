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
        ll cnt = 0;
        for (ll i = 0; i < (1LL << 60); i++)
        {
            set<ll> st;
            for (ll j = 0; j < n; j++)
            {
                st.insert(a[j] % (1LL << i));
            }
            if (st.size() == 2)
            {
                cout << (1LL << i) << endl;
                break;
            }
        }
        t--;
    }

    return 0;
}