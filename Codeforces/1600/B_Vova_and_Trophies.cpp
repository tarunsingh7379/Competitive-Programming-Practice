#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<char, ll>> v;
    ll cnt = 1;
    char last = s[0];
    ll num_g = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == last)
        {
            cnt++;
        }
        else
        {
            v.push_back({last, cnt});
            if (last == 'G')
            {
                num_g++;
            }
            cnt = 1;
            last = s[i];
        }
    }
    if (last == 'G')
    {
        num_g++;
    }
    v.push_back({last, cnt});
    ll ans = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i].first == 'G')
        {
            ans = max(ans, v[i].second);
            if (num_g > 1)
            {
                ans = max(ans, v[i].second + 1);
                if (i + 2 < v.size() && v[i + 1].second == 1)
                {
                    if (num_g > 2)
                        ans = max(ans, v[i].second + v[i + 2].second + 1);
                    else
                        ans = max(ans, v[i].second + v[i + 2].second);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}