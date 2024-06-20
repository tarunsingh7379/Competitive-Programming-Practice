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
        vector<ll> b(n, 0);
        b[0] = a[0];
        ll sum = a[0];
        for (ll i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
            sum += a[i];
        }
        if (sum != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            int flag = 1;
            for (auto num : b)
            {
                if (num < 0)
                {
                    flag = 0;
                    break;
                }
            }
            for (ll i = 0; i < n; i++)
            {
                if (b[i] == 0)
                {
                    for (ll j = i + 1; j < n; j++)
                    {
                        if (b[j] != 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    break;
                }
            }
            cout << (flag ? "Yes" : "No") << endl;
        }
        t--;
    }

    return 0;
}