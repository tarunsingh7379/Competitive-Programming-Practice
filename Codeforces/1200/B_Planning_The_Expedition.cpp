#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int k, int n, map<int, int> &mp)
{
    int cnt = 0;
    for (auto num : mp)
    {
        cnt = cnt + (num.second) / k;
    }
    return cnt >= n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int l = 1, r = 200;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid, n, mp))
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

    return 0;
}