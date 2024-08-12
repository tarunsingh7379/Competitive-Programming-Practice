#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<ll, ll> mp;
    ll sum = 0;
    for (ll i = 1; sum <= n; i++)
    {
        sum += i;
        mp[sum]++;
    }
    ll ans = 0;
    for (auto it : mp)
    {
        if (mp.find(n - it.first) != mp.end())
        {
            ans = 1;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}