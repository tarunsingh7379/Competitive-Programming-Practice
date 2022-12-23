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
        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x].push_back(i);
        }
        ll ans = INT_MAX;
        for (auto num : mp)
        {

            ll temp = 0;
            if (num.second[0] > 0)
            {
                temp++;
            }
            for (ll i = 0; i < (num.second.size() - 1); i++)
            {
                if ((num.second[i + 1] - num.second[i]) > 1)
                {
                    temp++;
                }
            }
            if (num.second[num.second.size() - 1] < (n - 1))
            {
                temp++;
            }

            ans = min(ans, temp);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}