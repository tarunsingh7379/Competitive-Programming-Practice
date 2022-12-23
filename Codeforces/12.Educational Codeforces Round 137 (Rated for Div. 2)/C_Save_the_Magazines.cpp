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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        ll i = 0;
        while (i < n)
        {
            if (s[i] == '0')
            {
                ll mi = a[i];
                ll sum = a[i];
                i++;
                if (i < n && s[i] == '1')
                {
                    while (i < n && s[i] == '1')
                    {
                        mi = min(mi, a[i]);
                        sum += a[i];
                        i++;
                    }
                    ans = ans + sum - mi;
                }
            }
            else
            {
                ans = ans + a[i];
                i++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}