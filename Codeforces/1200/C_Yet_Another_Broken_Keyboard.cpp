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
    string s;
    cin >> s;
    set<char> st;
    for (ll i = 0; i < k; i++)
    {
        char x;
        cin >> x;
        st.insert(x);
    }
    ll len = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.count(s[i]))
        {
            len++;
        }
        else
        {
            ans = ans + len * (len + 1) / 2;
            len = 0;
        }
    }
    ans = ans + len * (len + 1) / 2;
    cout << ans << endl;

    return 0;
}