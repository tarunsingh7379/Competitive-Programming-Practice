#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l;
    cin >> n >> k >> l;
    vector<int> a(n * k);
    for (int i = 0; i < n * k; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ind = n * k;
    for (int i = 1; i < n * k; i++)
    {
        if (a[i] - a[0] > l)
        {
            ind = i;
            break;
        }
    }
    if (ind < n)
    {
        cout << 0 << endl;
    }
    else
    {
        ll ans = 0;
        ll cur_ind = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += a[cur_ind++];
            for (ll j = 0; j < k - 1; j++)
            {
                ll rem = n - i - 1;
                if (ind - cur_ind - 1 < rem)
                    break;
                cur_ind++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}