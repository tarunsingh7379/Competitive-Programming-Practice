#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(vector<ll> &a, vector<ll> &b, vector<ll> &c, ll &ans)
{
    for (auto num : a)
    {
        auto left = lower_bound(b.begin(), b.end(), num);
        auto right = upper_bound(c.begin(), c.end(), num);
        if (left == b.end() || right == c.begin())
        {
            continue;
        }
        right--;
        ans = min(ans, (num - *left) * (num - *left) + (*left - *right) * (*left - *right) + (num - *right) * (num - *right));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        vector<ll> v1(n1), v2(n2), v3(n3);
        for (ll i = 0; i < n1; i++)
        {
            cin >> v1[i];
        }
        for (ll i = 0; i < n2; i++)
        {
            cin >> v2[i];
        }
        for (ll i = 0; i < n3; i++)
        {
            cin >> v3[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        sort(v3.begin(), v3.end());
        ll ans = 5e18;
        func(v1, v2, v3, ans);
        func(v1, v3, v2, ans);
        func(v2, v1, v3, ans);
        func(v2, v3, v1, ans);
        func(v3, v2, v1, ans);
        func(v3, v1, v2, ans);
        cout << ans << endl;
        t--;
    }

    return 0;
}