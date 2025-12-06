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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int l = 0;
    map<int, int> mp;
    int ans_l = 0, ans_r = 0;
    for (int r = 0; r < n; r++)
    {
        mp[a[r]]++;
        while (l < r && mp.size() > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        if ((r - l + 1) > ans)
        {
            ans = r - l + 1;
            ans_l = l + 1;
            ans_r = r + 1;
        }
    }
    cout << ans_l << " " << ans_r << endl;

    return 0;
}