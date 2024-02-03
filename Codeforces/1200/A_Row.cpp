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
    string s;
    cin >> s;
    ll two_one = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == '1')
        {
            two_one = 1;
            break;
        }
    }
    if (two_one)
    {
        cout << "No" << endl;
    }
    else
    {
        ll flag = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && n != 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            ll ma = 0, cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    cnt++;
                }
                else
                {
                    ma = max(ma, cnt);
                    cnt = 0;
                }
            }
            ma = max(ma, cnt);
            if (ma >= 3)
            {
                cout << "No" << endl;
            }
            else if (ma == 2)
            {
                if ((s[0] == s[1] && s[0] == '0') || (s[n - 2] == s[n - 1] && s[n - 1] == '0'))
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                }
            }
            else if (ma == 1)
            {
                if (n == 1)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}