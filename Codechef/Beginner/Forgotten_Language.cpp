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
        ll n, k;
        cin >> n >> k;
        vector<string> v;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        set<string> st;
        for (ll i = 0; i < k; i++)
        {
            ll l;
            cin >> l;
            for (ll j = 0; j < l; j++)
            {
                string x;
                cin >> x;
                st.insert(x);
            }
        }
        for (auto num : v)
        {
            if (st.count(num))
            {
                cout << "YES ";
            }
            else
            {
                cout << "NO ";
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}