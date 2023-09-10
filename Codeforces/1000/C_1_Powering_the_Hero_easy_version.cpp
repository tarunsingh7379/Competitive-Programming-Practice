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
        int n;
        cin >> n;
        vector<ll> v(n, 0);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x == 0)
            {
                sort(v.begin(), v.end());
                ans += v.back();
                v.pop_back();
            }
            else
            {
                v.push_back(x);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}