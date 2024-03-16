#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 0, rem = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            if (a > 0)
            {
                a--;
            }
            else if (b > 0)
            {
                b--;
                rem++;
            }
            else if (rem > 0)
            {
                rem--;
            }
            else
            {
                ans++;
            }
        }
        else
        {
            if (b > 0)
            {
                b--;
            }
            else
            {
                ans += 2;
            }
        }
    }
    cout << ans << endl;

    return 0;
}