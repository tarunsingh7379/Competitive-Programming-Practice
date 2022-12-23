#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(vector<ll> &a, vector<ll> &b)
{
    ll n = a.size();
    ll m = b.size();
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == b[j])
        {
            j++;
        }
    }
    if (j == m)
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll m;
        cin >> m;
        vector<ll> b(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        if (check(a, b))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        t--;
    }

    return 0;
}