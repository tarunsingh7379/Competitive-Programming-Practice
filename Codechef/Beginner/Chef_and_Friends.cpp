#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    set<string> st;
    st.insert("ch");
    st.insert("he");
    st.insert("ef");
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < (s.size() - 1); j++)
        {
            string x;
            x.push_back(s[j]);
            x.push_back(s[j + 1]);
            if (st.count(x))
            {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}