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
        vector<vector<ll>> a(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<ll> pos;
        for (ll i = 0; i < n; i++)
        {
            vector<ll> temp = a[i];
            sort(temp.begin(), temp.end());
            for (ll j = 0; j < m; j++)
            {
                if (a[i][j] != temp[j])
                {
                    pos.push_back(j);
                }
            }
            if (pos.size() > 0)
            {
                break;
            }
        }
        if (pos.size() == 0)
        {
            cout << 1 << " " << 1 << endl;
        }
        else if (pos.size() > 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                swap(a[i][pos[0]], a[i][pos[1]]);
            }
            ll flag = 1;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m - 1; j++)
                {
                    if (a[i][j] > a[i][j + 1])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }
            if (flag == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << pos[0] + 1 << " " << pos[1] + 1 << endl;
            }
        }
        t--;
    }

    return 0;
}