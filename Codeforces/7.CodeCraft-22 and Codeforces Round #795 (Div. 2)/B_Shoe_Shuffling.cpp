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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans[n] = {0};
        ll flag = 1;

        ll i = 0;
        while (i < n)
        {
            ll st = i, end = i;
            while (i < n - 1 && a[i] == a[i + 1])
            {
                i++;
                end = i;
            }
            if (st != end)
            {
                for (ll j = st; j < end; j++)
                {
                    ans[j] = j + 2;
                }
                ans[end] = st + 1;
            }
            else
            {
                flag = 0;
                break;
            }
            i++;
        }

        if (flag == 1)
        {
            for (ll i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        t--;
    }

    return 0;
}