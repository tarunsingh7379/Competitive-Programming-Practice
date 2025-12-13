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
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll m;
    cin >> m;
    ll b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, len = 0;
    while (l < n && r < m)
    {
        if (a[l] == b[r])
        {
            len++;
            l++;
            r++;
        }
        else if (a[l] < b[r])
        {
            if (l + 1 < n)
            {
                a[l + 1] += a[l];
            }
            l++;
        }
        else
        {
            if (r + 1 < m)
            {
                b[r + 1] += b[r];
            }
            r++;
        }
    }
    if (l == n && r == m && a[l - 1] == b[r - 1])
    {
        cout << len << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}