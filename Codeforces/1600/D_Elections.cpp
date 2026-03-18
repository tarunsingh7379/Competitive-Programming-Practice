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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> suffix(n + 1, -1);
        ll ma = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            ma = max(ma, a[i]);
            suffix[i] = ma;
        }
        ll cur_max = -1, cur_sum = 0;
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > max(a[0] + m, cur_max) && a[i] >= suffix[i + 1])
            {
                ans.push_back(0);
            }
            else
            {
                ll extra = cur_sum + m;
                ll new_val = a[i] + extra;
                if (new_val < suffix[i + 1])
                {
                    ans.push_back(i + 1);
                }
                else
                {
                    ans.push_back(i);
                }
            }
            cur_max = max(cur_max, a[i]);
            cur_sum += a[i];
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}