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
    ll dis[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> dis[i][j];
        }
    }
    ll order[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> order[i];
    }
    vector<ll> ans;
    vector<ll> alive(n, 0);
    for (ll i = n - 1; i >= 0; i--)
    {
        ll x = order[i] - 1;
        ll sum = 0;
        alive[x] = 1;
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                dis[j][k] = min(dis[j][k], dis[j][x] + dis[x][k]);
            }
        }
        for (ll j = 0; j < n; j++)
        {
            if (!alive[j])
                continue;
            for (ll k = 0; k < n; k++)
            {
                if (!alive[k])
                    continue;
                sum += dis[j][k];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}