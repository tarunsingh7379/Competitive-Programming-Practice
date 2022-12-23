#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    set<ll> st;
    while (k--)
    {
        string s;
        cin >> s;
        if (s == "CLICK")
        {
            ll x;
            cin >> x;
            if (st.count(x))
            {
                st.erase(x);
            }
            else
            {
                st.insert(x);
            }
            cout << st.size() << endl;
        }
        else
        {
            st.clear();
            cout << st.size() << endl;
        }
    }

    return 0;
}