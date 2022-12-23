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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> ans;
        ans.push_back(a[0]);
        for (ll i = 1; i < n; i++)
        {
            ll ind = upper_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
            if (ind < ans.size())
            {
                ans[ind] = a[i];
            }
            else
            {
                ans.push_back(a[i]);
            }
        }
        cout << ans.size() << " ";
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}