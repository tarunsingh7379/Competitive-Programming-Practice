#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll ind = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == '*')
        {
            ind = i;
            break;
        }
    }

    ll l = 0;
    ll flag = 1;
    for (ll i = 0; i < ind; i++)
    {
        if (l >= m)
        {
            flag = 0;
            break;
        }
        if (a[i] != b[l])
        {
            flag = 0;
            break;
        }
        l++;
    }
    ll r = m - 1;
    for (ll i = n - 1; i > ind; i--)
    {
        if (r < 0)
        {
            flag = 0;
            break;
        }
        if (a[i] != b[r])
        {
            flag = 0;
            break;
        }
        r--;
    }
    if (l - r > 1)
    {
        flag = 0;
    }
    if (ind == -1 && a != b)
    {
        flag = 0;
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}