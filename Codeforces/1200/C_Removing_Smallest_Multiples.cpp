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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0' || s[i - 1] == 'x')
            {
                if (s[i - 1] == '0')
                    ans += i;
                for (ll j = 2 * i; j <= n; j += i)
                {
                    if (s[j - 1] == '0')
                    {
                        ans += i;
                    }
                    else if (s[j - 1] == 'x')
                    {
                    }
                    else
                    {
                        break;
                    }
                    s[j - 1] = 'x';
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}