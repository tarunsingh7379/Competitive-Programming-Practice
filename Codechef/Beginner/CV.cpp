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
        string s;
        cin >> s;
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        ll ans = 0;
        for (ll i = 0; i < (n - 1); i++)
        {
            if (!st.count(s[i]) && st.count(s[i + 1]))
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}