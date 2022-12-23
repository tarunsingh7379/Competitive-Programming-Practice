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
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        if (st.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll first = a[0];
            ll pos = -1;
            vector<ll> v;
            cout << "YES" << endl;
            for (ll i = 1; i < n; i++)
            {
                if (a[i] != first)
                {
                    cout << 1 << " " << (i + 1) << endl;
                    pos = i;
                }
                else
                {
                    v.push_back(i);
                }
            }
            for (auto num : v)
            {
                cout << pos + 1 << " " << num + 1 << endl;
            }
        }

        t--;
    }

    return 0;
}