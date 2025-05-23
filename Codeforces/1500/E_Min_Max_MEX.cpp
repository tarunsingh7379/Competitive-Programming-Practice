#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int mex, vector<int> &a, int k)
{
    int cur_mex = 0;
    int segments = 0;
    int n = a.size();
    vector<int> temp;
    vector<int> vis(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        vis[a[i]] = 1;
        temp.push_back(a[i]);
        while (cur_mex < mex && vis[cur_mex])
        {
            cur_mex++;
        }
        if (cur_mex >= mex)
        {
            segments++;
            cur_mex = 0;
            for (auto num : temp)
            {
                vis[num] = 0;
            }
            temp.clear();
        }
    }
    return (segments >= k);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = min(a[i], n);
        }
        ll l = 0, r = n + 1;
        int ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, a, k))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}