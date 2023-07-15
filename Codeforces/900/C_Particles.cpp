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
        ll sum1 = 0, sum2 = 0, cnt = 0, ma = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                sum1 += max(x, 0LL);
            }
            else
            {
                sum2 += max(x, 0LL);
            }
            if (x < 0)
            {
                cnt++;
                ma = max(ma, x);
            }
        }
        if (cnt == n)
        {
            cout << ma << endl;
        }
        else
        {
            cout << max(sum1, sum2) << endl;
        }
        t--;
    }

    return 0;
}