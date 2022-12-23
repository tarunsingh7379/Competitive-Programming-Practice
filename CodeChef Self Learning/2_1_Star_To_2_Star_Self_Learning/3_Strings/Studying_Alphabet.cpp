#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string known;
    cin >> known;
    ll n;
    cin >> n;
    set<char> st;
    for (ll i = 0; i < known.size(); i++)
    {
        st.insert(known[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll flag = 1;
        for (ll j = 0; j < s.size(); j++)
        {
            if (!st.count(s[j]))
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }

    return 0;
}