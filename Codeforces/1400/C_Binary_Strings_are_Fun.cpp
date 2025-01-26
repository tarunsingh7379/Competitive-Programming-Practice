#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
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
        ll ans = 1, cur = 1;
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                cur = (2 * cur) % M;
            }
            else
            {
                cur = 1;
            }
            ans = (ans + cur) % M;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}