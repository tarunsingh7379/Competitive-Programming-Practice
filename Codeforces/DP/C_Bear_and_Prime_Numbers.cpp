#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int m = 10000000;
    vector<int> freq(m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    vector<int> cnt(m + 1, 0), vis(m + 1, 0);
    for (int i = 2; i <= m; i++)
    {
        if (vis[i])
            continue;
        for (int j = i; j <= m; j += i)
        {
            cnt[i] += freq[j];
            vis[j] = 1;
        }
    }
    vector<ll> prefix(m + 1, 0);
    ll sum = 0;
    for (ll i = 0; i <= m; i++)
    {
        sum += cnt[i];
        prefix[i] = sum;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        r = min(r, m);
        l = min(l, m);
        ll ans = prefix[r] - prefix[l - 1];
        cout << ans << endl;
    }

    return 0;
}