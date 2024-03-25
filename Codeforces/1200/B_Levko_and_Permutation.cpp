#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    if (k == n)
    {
        cout << -1 << endl;
    }
    else
    {
        ll d = n - k;
        ll ans[n];
        for (ll i = 0; i < n; i++)
        {
            ans[i] = i + 1;
        }
        if (d % 2 == 0)
        {
            for (ll i = 0; i < d; i += 2)
            {
                swap(ans[i], ans[i + 1]);
            }
        }
        else
        {
            for (ll i = 1; i < d; i += 2)
            {
                swap(ans[i], ans[i + 1]);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}