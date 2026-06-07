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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<int> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = prefix[i - 1] + (s[i - 1] == '-' ? -1 : 1);
        }
        vector<int> min_prefix(n + 1, 0), max_prefix(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            min_prefix[i] = min(min_prefix[i - 1], prefix[i]);
            max_prefix[i] = max(max_prefix[i - 1], prefix[i]);
        }
        vector<int> min_suffix(n + 2, 0), max_suffix(n + 2, 0);
        min_suffix[n + 1] = prefix[n];
        max_suffix[n + 1] = prefix[n];
        for (int i = n; i >= 1; i--)
        {
            min_suffix[i] = min(min_suffix[i + 1], prefix[i]);
            max_suffix[i] = max(max_suffix[i + 1], prefix[i]);
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int mi = min_prefix[l - 1];
            int ma = max_prefix[l - 1];
            int delta = prefix[l - 1] - prefix[r];
            mi = min(mi, delta + min_suffix[r + 1]);
            ma = max(ma, delta + max_suffix[r + 1]);
            int ans = ma - mi + 1;
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}