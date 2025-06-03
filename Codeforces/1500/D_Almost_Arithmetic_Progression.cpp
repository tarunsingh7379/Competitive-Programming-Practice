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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n <= 2)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = n + 1;
        for (ll i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                int d = (a[1] + j) - (a[0] + i);
                int cost = abs(i) + abs(j);
                int last = a[1] + j;
                for (int k = 2; k < n; k++)
                {
                    int diff = a[k] - last;
                    if (diff != d)
                    {
                        if (abs(diff - d) == 1)
                        {
                            last = last + d;
                            cost++;
                        }
                        else
                        {
                            cost = n + 1;
                            break;
                        }
                    }
                    else
                    {
                        last = a[k];
                    }
                }
                ans = min(ans, cost);
            }
        }
        if (ans == n + 1)
        {
            ans = -1;
        }
        cout << ans << endl;
    }

    return 0;
}