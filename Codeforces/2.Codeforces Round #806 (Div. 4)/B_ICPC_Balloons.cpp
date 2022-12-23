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
        ll ans = 0;
        for (auto c : s)
        {
            ans++;
            if (!st.count(c))
            {
                ans++;
            }
            st.insert(c);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}