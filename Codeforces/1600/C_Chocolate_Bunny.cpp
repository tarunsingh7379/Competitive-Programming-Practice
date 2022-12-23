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
    vector<ll> a(n);
    ll l = 0, r = 1;
    ll used[n + 1] = {0};
    while (r < n)
    {
        cout << "? " << l + 1 << " " << r + 1 << endl;
        ll x;
        cin >> x;
        cout << "? " << r + 1 << " " << l + 1 << endl;
        ll y;
        cin >> y;
        if (x > y)
        {
            a[l] = x;
            used[x]++;
            l = r;
            r++;
        }
        else
        {
            a[r] = y;
            used[y]++;
            r++;
        }
    }
    ll z = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (used[i] == 0)
        {
            z = i;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = z;
            break;
        }
    }
    cout << "! ";
    for (auto num : a)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}