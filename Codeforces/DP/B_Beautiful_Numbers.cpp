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
        if (n <= 9)
        {
            cout << 0 << endl;
        }
        else
        {
            string s = to_string(n);
            sort(s.begin() + 1, s.end());
            ll cnt = 0, sum = 0;
            ll ans = s.size();
            for (ll d = 1; d <= 9; d++)
            {
                if (s[0] - '0' == d)
                {
                    cnt = 1;
                }
                else
                {
                    cnt = 0;
                }
                sum = d;
                for (ll i = 1; i < s.size(); i++)
                {
                    if (sum + (s[i] - '0') <= 9)
                    {
                        cnt++;
                        sum += (s[i] - '0');
                    }
                }
                ans = min(ans, (ll)s.size() - cnt);
            }
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}