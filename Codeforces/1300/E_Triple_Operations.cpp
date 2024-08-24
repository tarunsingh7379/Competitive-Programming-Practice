#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> prefix(200010, 0), cur(200010, 0);
    for (ll i = 1; i < 200010; i++)
    {
        ll j = i;
        ll cnt = 0;
        while (j != 0)
        {
            j /= 3;
            cnt++;
        }
        cur[i] = cnt;
        prefix[i] = prefix[i - 1] + cnt;
    }
    int t;
    cin >> t;
    while (t)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = prefix[r] - prefix[l - 1] + cur[l];
        cout << ans << endl;
        t--;
    }

    return 0;
}