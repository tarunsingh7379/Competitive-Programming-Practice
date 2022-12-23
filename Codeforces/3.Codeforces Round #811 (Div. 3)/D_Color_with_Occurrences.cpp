#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<string, ll> &a, pair<string, ll> &b)
{
    return a.first.size() > b.first.size();
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
        ll n;
        cin >> n;
        vector<pair<string, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end(), cmp);
        // for (auto num : v)
        // {
        //     cout << num.first << endl;
        // }
        ll sz = s.size();
        ll check[sz] = {0};
        vector<pair<ll, ll>> ans;
        for (auto num : v)
        {
            ll len = num.first.size();
            vector<ll> pos;
            for (ll i = 0; i < sz; i++)
            {
                string a = s.substr(i, len);
                if (a == num.first)
                {
                    pos.push_back(i);
                }
            }

            for (ll i = 0; i < pos.size(); i++)
            {
                if (check[pos[i]] == 0 || check[pos[i] + len - 1] == 0)
                {
                    ans.push_back({num.second + 1, pos[i] + 1});
                    for (ll j = pos[i]; j < pos[i] + len; j++)
                    {
                        check[j] = 1;
                    }
                }
            }
        }
        ll flag = 1;
        for (ll i = 0; i < sz; i++)
        {
            if (check[i] == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num.first << " " << num.second << endl;
            }
        }
        t--;
    }

    return 0;
}