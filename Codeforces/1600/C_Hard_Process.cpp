#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll len, vector<int> &prefix, int k)
{
    ll cost = 0;
    for (int i = len - 1; i < prefix.size(); i++)
    {
        cost = prefix[i];
        if (i - len >= 0)
        {
            cost -= prefix[i - len];
        }
        if (len - cost <= k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> prefix(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        prefix[i] = sum;
    }
    ll l = 0, r = n;
    ll ans = 0, ind = -1, temp;
    if (prefix[n - 1] == 0)
    {
        ans = k;
        cout << ans << endl;
        for (int i = 0; i < k; i++)
        {
            cout << 1 << " ";
        }
        for (int i = k; i < n; i++)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    else
    {
        l = 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if ((temp = check(mid, prefix, k)) != -1)
            {
                ans = mid;
                ind = temp;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        for (int i = 0; i <= ind - ans; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = ind - ans + 1; i <= ind; i++)
        {
            cout << 1 << " ";
        }
        for (int i = ind + 1; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}