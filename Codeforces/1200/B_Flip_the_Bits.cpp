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
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<ll> ones(n, 0);
            vector<ll> zeroes(n, 0);
            ll cnt_0 = 0, cnt_1 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == '0')
                {
                    cnt_0++;
                }
                else
                {
                    cnt_1++;
                }
                ones[i] = cnt_1;
                zeroes[i] = cnt_0;
            }

            bool ok = true;
            ll flag = 1;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (flag == 1)
                {
                    if (b[i] != a[i])
                    {
                        if (ones[i] != zeroes[i])
                        {
                            ok = false;
                            break;
                        }
                        flag = 0;
                    }
                }
                else
                {
                    if (b[i] == a[i])
                    {
                        if (ones[i] != zeroes[i])
                        {
                            ok = false;
                            break;
                        }
                        flag = 1;
                    }
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
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