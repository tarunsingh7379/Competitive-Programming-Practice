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
    vector<ll> used(n, 0);
    ll p = 1;
    ll cnt = 0;
    for (ll i = 1; i < n; i++)
    {
        if (__gcd(i, n) == 1)
        {
            used[i] = 1;
            p = (p * i) % n;
            cnt++;
        }
    }
    if (p != 1)
    {
        used[p] = 0;
        cnt--;
    }
    cout << cnt << endl;
    for (ll i = 1; i < n; i++)
    {
        if (used[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}