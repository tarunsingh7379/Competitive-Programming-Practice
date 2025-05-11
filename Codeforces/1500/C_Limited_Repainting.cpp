#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll cost, string &s, vector<int> &a, int k)
{
    int n = a.size();
    int cnt = 0;
    char last = 'R';
    for (int i = 0; i < n; i++)
    {
        if (a[i] > cost)
        {
            if (s[i] == 'B' && last != 'B')
            {
                cnt++;
            }
            last = s[i];
        }
    }
    return cnt <= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = 1e9;
        ll ans = 1e9;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, s, a, k))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}