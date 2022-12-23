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

        ll freq[1001] = {0};
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }
        ll ans = -1;
        ll last = -1;
        for (ll i = 1000; i >= 0; i--)
        {
            if (freq[i] >= 2)
            {
                last = i;
                if (freq[i] >= 4)
                {
                    ans = i * i;
                    break;
                }
                else
                {
                    for (ll j = i - 1; j >= 0; j--)
                    {
                        if (freq[j] >= 2)
                        {
                            ans = last * j;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}