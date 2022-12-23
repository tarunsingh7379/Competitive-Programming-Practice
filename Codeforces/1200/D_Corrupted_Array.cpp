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
        n = n + 2;
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        ll prefix[n] = {0};
        prefix[0] = b[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + b[i];
        }
        ll pos = -1;
        for (ll i = 0; i < (n - 1); i++)
        {
            ll req = b[n - 1];
            ll sum = prefix[n - 2] - b[i];
            if (sum == req)
            {
                pos = i;
                break;
            }
        }
        if (pos == -1)
        {
            if (prefix[n - 3] == b[n - 2])
            {
                for (ll i = 0; i < n - 2; i++)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            for (ll i = 0; i < n - 1; i++)
            {
                if (pos != i)
                {
                    cout << b[i] << " ";
                }
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}