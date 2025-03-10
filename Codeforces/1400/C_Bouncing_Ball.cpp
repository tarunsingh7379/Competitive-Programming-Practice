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
        ll n, p, k;
        cin >> n >> p >> k;
        p--;
        string s;
        cin >> s;
        ll add, remove;
        cin >> add >> remove;
        vector<ll> suffix(n, 0);
        for (ll i = n - 1; i >= 0; i--)
        {
            suffix[i] = (s[i] - '0' == 0 ? 1 : 0);
            if (i + k < n)
            {
                suffix[i] += suffix[i + k];
            }
        }
        ll ans = n * add;
        ll removal_cost = 0, add_cost = 0;
        for (ll i = p; i < n; i++)
        {
            add_cost = add * suffix[i];
            ans = min(ans, add_cost + removal_cost);
            removal_cost += remove;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}