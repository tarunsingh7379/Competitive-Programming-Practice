#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r, k;
    cin >> l >> r >> k;
    vector<ll> ans;
    ll p = 1;
    for (ll i = 0; p <= r; i++)
    {
        if (p >= l && p <= r)
        {
            ans.push_back(p);
        }
        ll x = LLONG_MAX / p;
        if (x < k)
        {
            break;
        }
        p *= k;
    }

    if (!ans.size())
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}