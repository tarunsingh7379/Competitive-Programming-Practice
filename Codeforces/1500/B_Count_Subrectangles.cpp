#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(vector<ll> &a, vector<ll> &ones)
{
    ll n = a.size();
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            int j = i;
            while (j < n && a[j] == 1)
            {
                j++;
            }
            for (int len = 1; (j - i - len + 1) >= 1; len++)
            {
                ones[len] += (j - i - len + 1);
            }
            j--;
            i = j;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<ll> ones_a(n + 1, 0), ones_b(m + 1, 0);
    func(a, ones_a);
    func(b, ones_b);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if ((k % i == 0) && (k / i <= m))
        {
            ans += ones_a[i] * ones_b[k / i];
        }
    }
    cout << ans << endl;

    return 0;
}