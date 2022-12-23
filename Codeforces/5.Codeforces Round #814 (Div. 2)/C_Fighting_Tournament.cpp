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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<ll, ll>> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back({0, 0});
        }
        int cnt = 0;
        int j = 0;
        int pos = 0;
        for (int i = 1; i < n; i++)
        {
            cnt++;
            if (a[j] > a[i])
            {
                if (ans[j].first == 0)
                {
                    ans[j].first = cnt;
                    ans[j].second = 1;
                }
                else
                {
                    ans[j].second++;
                }
            }
            else
            {
                if (ans[i].first == 0)
                {
                    ans[i].first = cnt;
                    ans[i].second = 1;
                }
                else
                {
                    ans[i].second++;
                }
                j = i;
            }
            if (a[i] == n)
            {
                pos = i;
                break;
            }
        }

        while (q--)
        {
            ll ind, k;
            cin >> ind >> k;
            ind--;
            if (ans[ind].first == 0)
            {
                cout << 0 << endl;
            }
            else if (ans[ind].first > k)
            {
                cout << 0 << endl;
            }
            else
            {
                if (ind == pos)
                {
                    cout << k - ans[ind].first + 1 << endl;
                }
                else
                {
                    cout << min(k - ans[ind].first + 1, ans[ind].second) << endl;
                }
            }
        }
        t--;
    }

    return 0;
}