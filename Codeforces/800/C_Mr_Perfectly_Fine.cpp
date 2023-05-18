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
        ll a = INT_MAX, b = INT_MAX, c = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            string s;
            cin >> s;
            if (s == "01")
            {
                a = min(a, x);
            }
            else if (s == "10")
            {
                b = min(b, x);
            }
            else if (s == "11")
            {
                c = min(c, x);
            }
        }
        ll ans = INT_MAX;
        if (a != INT_MAX && b != INT_MAX)
        {
            ans = min(ans, a + b);
        }
        ans = min(ans, c);
        if (ans == INT_MAX)
        {
            ans = -1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}