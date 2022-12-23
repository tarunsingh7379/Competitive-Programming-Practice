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
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            ll d = n - 2 * (k - 1);
            if (d > 0)
            {
                cout << "YES" << endl;
                cout << d << " ";
                for (ll i = 0; i < k - 1; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                if (k % 2 == 0)
                {
                    ll d = n - (k - 1);
                    if (d > 0)
                    {
                        cout << "YES" << endl;
                        cout << d << " ";
                        for (ll i = 0; i < k - 1; i++)
                        {
                            cout << 1 << " ";
                        }
                        cout << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            if (k % 2 != 0)
            {
                ll d = n - (k - 1);
                if (d > 0)
                {
                    cout << "YES" << endl;
                    cout << d << " ";
                    for (ll i = 0; i < k - 1; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}