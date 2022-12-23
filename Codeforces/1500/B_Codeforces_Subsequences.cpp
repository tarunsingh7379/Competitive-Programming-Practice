#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k;
    cin >> k;

    if (k == 1)
    {
        cout << "codeforces" << endl;
    }
    else
    {
        vector<ll> f(10, 1);
        while (1)
        {
            ll cost = 1;
            for (ll i = 0; i < 10; i++)
            {
                f[i]++;
                cost = 1;
                for (ll j = 0; j < 10; j++)
                {
                    cost = cost * f[j];
                }
                if (cost >= k)
                {
                    break;
                }
            }
            if (cost >= k)
            {
                break;
            }
        }
        string ans = "codeforces";
        for (ll i = 0; i < 10; i++)
        {
            for (ll j = 0; j < f[i]; j++)
            {
                cout << ans[i];
            }
        }
        cout << endl;
    }

    return 0;
}