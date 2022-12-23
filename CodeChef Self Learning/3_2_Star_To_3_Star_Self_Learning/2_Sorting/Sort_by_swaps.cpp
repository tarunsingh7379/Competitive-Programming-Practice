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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b = a;
    sort(b.begin(), b.end());
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (a[j] == b[i])
                {
                    ans.push_back({i, j});
                    swap(a[i], a[j]);
                    break;
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num.first << " " << num.second << endl;
    }
    return 0;
}