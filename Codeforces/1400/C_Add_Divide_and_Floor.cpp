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
        sort(a, a + n);
        vector<ll> ans;
        while (a[0] != a[n - 1])
        {
            if (a[0] & 1)
            {
                ans.push_back(1);
                a[0] = (a[0] + 1) / 2;
                a[n - 1] = (a[n - 1] + 1) / 2;
            }
            else
            {
                ans.push_back(0);
                a[0] = (a[0]) / 2;
                a[n - 1] = (a[n - 1]) / 2;
            }
        }
        cout << ans.size() << endl;
        if (ans.size() <= n)
        {
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }

        t--;
    }

    return 0;
}