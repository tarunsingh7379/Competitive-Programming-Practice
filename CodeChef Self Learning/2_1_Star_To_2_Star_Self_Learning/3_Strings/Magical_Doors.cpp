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
        string s;
        cin >> s;
        ll ans = 0;
        ll n = s.size();
        ll flip = 0;
        for (ll i = 0; i < n; i++)
        {
            if (flip == 0)
            {
                if (s[i] == '0')
                {
                    ans++;
                    flip = 1;
                }
            }
            else
            {
                if (s[i] == '1')
                {
                    ans++;
                    flip = 0;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}