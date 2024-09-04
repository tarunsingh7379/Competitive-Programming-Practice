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
        ll odd = 0, even = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd && even)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> ans;
            for (int i = 29; i >= 0; i--)
            {
                ans.push_back(1LL << i);
            }
            if (even)
            {
                ans.push_back(1);
            }
            cout << ans.size() << endl;
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