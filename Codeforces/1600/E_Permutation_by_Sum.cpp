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
    while (t--)
    {
        ll n, l, r, s;
        cin >> n >> l >> r >> s;
        vector<ll> v;
        ll k = r - l + 1;
        for (ll i = 1; i <= k; i++)
        {
            v.push_back(i);
        }
        ll sum = k * (k + 1) / 2;
        if (s < sum)
        {
            cout << -1 << endl;
            continue;
        }
        ll flag = 0;
        while (sum < s)
        {
            flag = 0;
            for (ll i = 0; i < k; i++)
            {
                ll mx_value = n - i;
                ll ind = k - i - 1;
                if (v[ind] < mx_value)
                {
                    sum++;
                    v[ind]++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (sum != s)
        {
            cout << -1 << endl;
            continue;
        }
        vector<ll> ans(n, -1);
        ll used[n + 1] = {0};
        for (ll i = l; i <= r; i++)
        {
            ans[i - 1] = v[i - l];
            used[ans[i - 1]] = 1;
        }
        for (ll i = 0; i < n; i++)
        {
            if (ans[i] == -1)
            {
                for (ll j = 1; j <= n; j++)
                {
                    if (used[j] == 0)
                    {
                        ans[i] = j;
                        used[j] = 1;
                        break;
                    }
                }
            }
        }
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}