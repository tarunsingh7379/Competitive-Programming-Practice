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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto num : mp)
        {
            v.push_back({num.second, num.first});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int last = 1e9;
        int ans = 0;
        for (auto num : v)
        {
            if (num.first < last)
            {
                ans += num.first;
                last = num.first;
            }
            else if (last > 0)
            {
                ans += (last - 1);
                last--;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}