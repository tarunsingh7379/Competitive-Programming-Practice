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
    vector<ll> v;
    v.push_back(1);
    v.push_back(2);
    ll x = 4;
    for (ll i = 2; i <= 100; i++)
    {
        v.push_back(x);
        x = x + 3;
    }
    while (t)
    {
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}