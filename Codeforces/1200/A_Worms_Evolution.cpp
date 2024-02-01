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
    ll flag = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                if (a[i] == a[j] + a[k] && i != j && j != k && i != k)
                {
                    cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
    }

    return 0;
}