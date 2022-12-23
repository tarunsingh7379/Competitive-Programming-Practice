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
        ll n, k;
        cin >> n >> k;
        if (n == 4 && k == 3)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<pair<ll, ll>> v;

            if (k != (n - 1))
            {
                vector<ll> used(n, 0);
                v.push_back({n - 1, k});
                used[n - 1] = 1;
                used[k] = 1;
                for (ll i = 1; i < n - 1; i++)
                {
                    if (used[i] == 0)
                    {
                        ll req = n - 1 - i;
                        if (used[req] == 0)
                        {
                            v.push_back({i, req});
                            used[i] = 1;
                            used[req] = 1;
                        }
                        else
                        {
                            v.push_back({i, 0});
                            used[i] = 1;
                            used[0] = 1;
                        }
                    }
                }
            }
            else
            {
                vector<ll> used(n, 0);
                v.push_back({n - 1, k - 1});
                v.push_back({1, 3});
                used[n - 1] = 1;
                used[k - 1] = 1;
                used[1] = 1;
                used[3] = 1;
                for (ll i = 1; i < n - 1; i++)
                {
                    if (used[i] == 0)
                    {
                        ll req = n - 1 - i;
                        if (used[req] == 0)
                        {
                            v.push_back({i, req});
                            used[i] = 1;
                            used[req] = 1;
                        }
                        else
                        {
                            v.push_back({i, 0});
                            used[i] = 1;
                            used[0] = 1;
                        }
                    }
                }
            }
            for (auto num : v)
            {
                cout << num.first << " " << num.second << endl;
            }
        }
        t--;
    }

    return 0;
}