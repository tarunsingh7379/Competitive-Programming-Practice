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
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<ll, ll>> org;
        for (ll i = 0; i < n; i++)
        {
            org.push_back({a[i], b[i]});
        }
        sort(a, a + n);
        sort(b, b + n);
        ll flag = 1;
        vector<pair<ll, ll>> ans;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i; j < n; j++)
            {
                if (org[j] == make_pair(a[i], b[i]))
                {
                    swap(org[i], org[j]);
                    if (i != j)
                    {
                        ans.push_back({i, j});
                    }
                    break;
                }
            }
            if (org[i] != make_pair(a[i], b[i]))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << ans.size() << endl;
            for (auto num : ans)
            {
                cout << num.first + 1 << " " << num.second + 1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}