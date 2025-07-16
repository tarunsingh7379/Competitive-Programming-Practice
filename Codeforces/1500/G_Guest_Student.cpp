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
        ll k;
        cin >> k;
        ll a[7];
        ll study_days = 0;
        for (ll i = 0; i < 7; i++)
        {
            cin >> a[i];
            study_days += a[i];
        }
        ll ans = 1e18;
        for (ll i = 0; i < 7; i++)
        {
            ll cycle = max(0LL, (k + study_days - 1) / study_days - 1);
            ll rem = k - cycle * study_days;
            ll days_spend = 7 * cycle;
            for (ll j = i; j < 7 && rem > 0; j++)
            {
                if (a[j])
                {
                    rem--;
                }
                days_spend++;
            }
            for (ll j = 0; j < i && rem > 0; j++)
            {
                if (a[j])
                {
                    rem--;
                }
                days_spend++;
            }
            ans = min(ans, days_spend);
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}