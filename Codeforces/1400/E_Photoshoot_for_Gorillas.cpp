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
    while (t)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll w;
        cin >> w;
        ll weights[w];
        for (ll i = 0; i < w; i++)
        {
            cin >> weights[i];
        }
        vector<int> cnt;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                ll upi = max(0LL, i - k + 1);
                ll loweri = min(i, n - k);
                ll upj = max(0LL, j - k + 1);
                ll lowerj = min(j, m - k);
                cnt.push_back((loweri - upi + 1) * (lowerj - upj + 1));
            }
        }
        sort(weights, weights + w, greater<int>());
        sort(cnt.begin(), cnt.end(), greater<int>());
        ll ans = 0;
        for (ll i = 0; i < w; i++)
        {
            ans += weights[i] * cnt[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}