#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool is_ok(ll x)
{
    ll r = 0;
    while (x)
    {
        r = x % 10;
        x /= 10;
        if (r != 0 && r != 1)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<ll> good;
    for (ll i = 2; i <= 100000; i++)
    {
        if (is_ok(i))
        {
            good.push_back(i);
        }
    }
    reverse(good.begin(), good.end());

    while (t)
    {
        ll n;
        cin >> n;
        for (auto num : good)
        {
            while (n % num == 0 && n > 1)
            {
                n /= num;
            }
        }
        cout << (n == 1 ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}