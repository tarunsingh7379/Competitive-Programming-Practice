#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int x, int n, int k, vector<int> &a)
{
    for (int i = 0; i < n; i++)
    {
        int need = x, cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (need <= a[j])
                return true;
            cnt += (need - a[j]);
            if (cnt > k)
                break;
            need--;
        }
    }
    return false;
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
        int ma = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ma = max(ma, a[i]);
        }
        int l = 1, r = ma + k;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, n, k, a))
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