#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n + m];
    for (ll i = 0; i < n + m; i++)
    {
        cin >> a[i];
    }
    ll b[n + m];
    vector<int> ind;
    for (ll i = 0; i < n + m; i++)
    {
        cin >> b[i];
        if (b[i])
            ind.push_back(a[i]);
    }

    int j = -1;
    vector<int> ans(m, 0);
    for (ll i = 0; i < n + m; i++)
    {
        if (b[i] == 0)
        {
            if (j != -1)
            {
                int left_cost = a[i] - ind[j];
                int right_cost = INT_MAX;
                if (j + 1 < m)
                {
                    right_cost = ind[j + 1] - a[i];
                }
                if (left_cost <= right_cost)
                {
                    ans[j]++;
                }
                else
                {
                    ans[j + 1]++;
                }
            }
            else
            {
                ans[j + 1]++;
            }
        }
        else
        {
            j++;
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}