#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_prime(ll x)
{
    ll cnt = 0;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cnt += 2;
        }
        if (i * i == x)
        {
            cnt--;
        }
    }
    if (cnt == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
        string x = "Ashishgup", y = "FastestFinger", ans;
        if (n == 1)
        {
            ans = y;
        }
        else if (n == 2)
        {
            ans = x;
        }
        else
        {
            if (n % 2 != 0)
            {
                ans = x;
            }
            else
            {
                n = n / 2;
                if (n % 2 != 0)
                {
                    if (is_prime(n))
                    {
                        ans = y;
                    }
                    else
                    {
                        ans = x;
                    }
                }
                else
                {
                    while (n % 2 == 0)
                    {
                        n = n / 2;
                    }
                    if (n % 2 != 0 && n != 1)
                    {
                        ans = x;
                    }
                    else
                    {
                        ans = y;
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}