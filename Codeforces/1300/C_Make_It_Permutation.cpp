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
        ll n, a, d;
        cin >> n >> d >> a;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<int> temp;
        for (auto num : mp)
        {
            temp.push_back(num.first);
        }
        ll ans = (v.size() - temp.size()) * d;
        ll extra = 1e16;
        for (ll i = temp.size() - 1; i >= 0; i--)
        {
            ll cost = (temp[i] - (i + 1)) * a + (temp.size() - i - 1) * d;
            extra = min(extra, cost);
        }
        cout << min(n * d + a, ans + extra) << endl;
        t--;
    }

    return 0;
}