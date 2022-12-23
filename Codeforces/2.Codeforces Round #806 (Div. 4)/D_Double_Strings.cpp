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
        vector<string> v;
        set<string> st;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            st.insert(s);
        }
        string ans = "";
        for (ll i = 0; i < n; i++)
        {
            string s = v[i];
            ll flag = 0;
            for (ll j = 0; j < s.size() - 1; j++)
            {
                string s1 = s.substr(0, j + 1);
                string s2 = s.substr(j + 1);
                if (st.count(s1) && st.count(s2))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}