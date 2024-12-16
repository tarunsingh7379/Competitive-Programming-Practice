#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(vector<ll> &a, ll ind)
{
    vector<ll> temp;
    for (ll i = 0; i < a.size(); i++)
    {
        if (ind == i)
        {
            continue;
        }
        temp.push_back(a[i]);
    }
    ll last = 0;
    for (ll i = 1; i < temp.size(); i++)
    {
        ll x = __gcd(temp[i], temp[i - 1]);
        if (x < last)
        {
            return false;
        }
        last = x;
    }
    return true;
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b;
        for (ll i = 1; i < n; i++)
        {
            b.push_back(gcd(a[i], a[i - 1]));
        }
        ll m = b.size();
        ll flag = 1, ind = -1;
        for (ll i = 1; i < m; i++)
        {
            if (b[i] < b[i - 1])
            {
                flag = 0;
                ind = i;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            flag = check(a, ind) | check(a, ind - 1) | check(a, ind + 1);
            cout << (flag ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}