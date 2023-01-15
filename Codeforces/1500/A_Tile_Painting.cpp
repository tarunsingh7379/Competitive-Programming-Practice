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
    vector<ll> v;
    ll x = n, flag = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        flag = 0;
        while (x % i == 0)
        {
            x /= i;
            flag = 1;
        }
        if (flag == 1)
        {
            v.push_back(i);
        }
    }
    if (x != 1)
    {
        v.push_back(x);
    }
    if (v.size() == 1)
    {
        cout << v.front() << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}