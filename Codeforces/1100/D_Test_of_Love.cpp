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
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        s = " " + s;
        vector<ll> log;
        for (ll i = 1; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                log.push_back(i);
            }
        }
        log.push_back(n + 1);
        ll i = 0, j = 0;
        bool ok = true;
        while (i < n + 1)
        {
            ll d = log[j] - i;
            if (d <= m)
            {
                i = log[j];
            }
            else
            {
                i += m;
                if (i >= n + 1)
                {
                    break;
                }
                while (i < log[j])
                {
                    if (s[i] == 'C' || k <= 0)
                    {
                        ok = false;
                        break;
                    }
                    i++;
                    k--;
                }
                if (!ok)
                {
                    break;
                }
            }
            j++;
        }
        if (i < n + 1)
        {
            ok = false;
        }
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        t--;
    }
    return 0;
}