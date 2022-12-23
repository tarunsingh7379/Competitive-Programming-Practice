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
        ll par[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> par[i];
        }
        ll p[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        if (par[p[0]] != p[0])
        {
            cout << -1 << endl;
        }
        else
        {
            vector<ll> dist(n + 1, -1);
            dist[p[0]] = 0;
            ll flag = 1;
            for (ll i = 1; i < n; i++)
            {
                if (dist[par[p[i]]] == -1)
                {
                    flag = 0;
                    break;
                }
                dist[p[i]] = dist[p[i - 1]] + 1;
            }
            if (flag == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                for (ll i = 1; i <= n; i++)
                {
                    cout << dist[i] - dist[par[i]] << " ";
                }
                cout << endl;
            }
        }

        t--;
    }

    return 0;
}