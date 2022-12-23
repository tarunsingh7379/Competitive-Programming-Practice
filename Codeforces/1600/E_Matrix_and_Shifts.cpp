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
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        ll freq[n] = {0};
        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (v[i][j] == '1')
                {
                    freq[(i - j + n) % n]++;
                    total++;
                }
            }
        }
        ll ma = 0;
        for (ll i = 0; i < n; i++)
        {
            ma = max(ma, freq[i]);
        }
        ll ans = (n - ma) + (total - ma);
        cout << ans << endl;
        t--;
    }

    return 0;
}