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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n), c(m);
        vector<int> need(n + 1, 0), ava(n + 1, 0), total(n + 1, 0);
        vector<vector<int>> v(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] != b[i])
            {
                need[b[i]]++;
                v[b[i]].push_back(i);
            }
            total[b[i]]++;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
            ava[c[i]]++;
        }
        int flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if (need[i] > ava[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (total[c[m - 1]] == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        ll pos = -1;
        for (ll i = 0; i < n; i++)
        {
            if (b[i] == c[m - 1])
            {
                pos = i;
                break;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (b[i] == c[m - 1] && a[i] != b[i])
            {
                pos = i;
                break;
            }
        }
        vector<ll> ans(m, 0);
        for (ll i = 0; i < m - 1; i++)
        {
            if (total[c[i]] == 0)
            {
                ans[i] = pos + 1;
            }
            else
            {
                if (!v[c[i]].empty())
                {
                    ans[i] = v[c[i]].back() + 1;
                    v[c[i]].pop_back();
                }
                else
                {
                    ans[i] = pos + 1;
                }
            }
        }
        ans[m - 1] = pos + 1;
        cout << "YES" << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}