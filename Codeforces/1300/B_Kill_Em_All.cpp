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
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        vector<int> v;
        for (auto it : mp)
        {
            v.push_back(it.first);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int ans = 0, extra = 0;
        for (int i = 0; i < v.size(); i++)
        {
            v[i] -= extra;
            if (v[i] > 0)
            {
                ans++;
                extra += k;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}