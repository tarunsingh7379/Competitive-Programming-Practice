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
        ll n;
        cin >> n;
        ll a[n];
        ll freq[1005] = {0};
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        ll ans = -1;
        for (ll i = 1; i <= 1000; i++)
        {
            if (freq[i] >= 2)
            {
                for (ll j = i + 1; j <= 1000; j++)
                {
                    if (freq[j] >= 2)
                    {
                        ans = max(ans, i * j);
                    }
                }
                if (freq[i] >= 4)
                {
                    ans = max(ans, i * i);
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}