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
        ll r, p, s;
        cin >> r >> p >> s;
        string ss;
        cin >> ss;
        vector<ll> r_ind, p_ind, s_ind;
        for (ll i = 0; i < ss.size(); i++)
        {
            if (ss[i] == 'R')
            {
                r_ind.push_back(i);
            }
            else if (ss[i] == 'P')
            {
                p_ind.push_back(i);
            }
            else
            {
                s_ind.push_back(i);
            }
        }
        string ans = string(n, '0');
        ll win = 0;
        for (auto num : r_ind)
        {
            if (p > 0)
            {
                ans[num] = 'P';
                win++;
                p--;
            }
        }
        for (auto num : p_ind)
        {
            if (s > 0)
            {
                ans[num] = 'S';
                win++;
                s--;
            }
        }
        for (auto num : s_ind)
        {
            if (r > 0)
            {
                ans[num] = 'R';
                win++;
                r--;
            }
        }

        if (win >= (n + 1) / 2)
        {
            cout << "YES" << endl;
            for (auto &c : ans)
            {
                if (c == '0')
                {
                    if (r)
                    {
                        c = 'R';
                        r--;
                    }
                    else if (p)
                    {
                        c = 'P';
                        p--;
                    }
                    else
                    {
                        c = 'S';
                        s--;
                    }
                }
            }
            cout << ans << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}