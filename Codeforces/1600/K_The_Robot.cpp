#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll I, ll J, string &s)
{
    ll n = s.size();
    ll i = 0, j = 0;
    for (ll k = 0; k < s.size(); k++)
    {
        ll prev_i = i, prev_j = j;
        if (s[k] == 'L')
        {
            i--;
        }
        else if (s[k] == 'R')
        {
            i++;
        }
        else if (s[k] == 'U')
        {
            j++;
        }
        else
        {
            j--;
        }
        if (i == I && j == J)
        {
            i = prev_i;
            j = prev_j;
        }
    }

    if (i == 0 && j == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
        int i = 0, j = 0;
        vector<pair<ll, ll>> v;
        pair<ll, ll> ans = {0, 0};
        for (ll k = 0; k < s.size(); k++)
        {
            if (s[k] == 'L')
            {
                i--;
            }
            else if (s[k] == 'R')
            {
                i++;
            }
            else if (s[k] == 'U')
            {
                j++;
            }
            else
            {
                j--;
            }
            v.push_back({i, j});
        }
        for (auto num : v)
        {
            if (check(num.first, num.second, s))
            {
                ans = {num.first, num.second};
                break;
            }
        }
        cout << ans.first << " " << ans.second << endl;
        t--;
    }

    return 0;
}