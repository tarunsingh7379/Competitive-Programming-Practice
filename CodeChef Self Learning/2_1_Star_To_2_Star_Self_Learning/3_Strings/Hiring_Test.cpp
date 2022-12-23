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
        ll n, m;
        cin >> n >> m;
        ll x, y;
        cin >> x >> y;
        string ans = "";
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            ll full = 0, partial = 0;
            for (ll j = 0; j < s.size(); j++)
            {
                if (s[j] == 'F')
                {
                    full++;
                }
                else if (s[j] == 'P')
                {
                    partial++;
                }
            }
            if ((full >= x) || ((full == (x - 1)) && (partial >= y)))
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