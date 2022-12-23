#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    ll w;
    cin >> w;
    for (ll i = 0; i < w; i++)
    {
        string x;
        cin >> x;
        ll flag = 1;
        for (ll j = 0; j < x.size(); j++)
        {
            if (!st.count(x[j]))
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }

    return 0;
}