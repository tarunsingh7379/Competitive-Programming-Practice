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
        vector<ll> suffix(n + 1, 0);
        ll sum = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            sum += a[i];
            suffix[i] = sum;
        }
        ll prefix = 0;
        ll max_sum = suffix[0];
        ll ind = -1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                ll cur_sum = prefix - a[i] + suffix[i + 1];
                if (cur_sum > max_sum)
                {
                    max_sum = cur_sum;
                    ind = i;
                }
            }
            prefix += abs(a[i]);
        }
        if (ind == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<ll> ans;
            ll flag = 0;
            for (ll i = ind - 1; i >= 0; i--)
            {
                if (flag == 0 && a[i] > 0)
                {
                    ans.push_back(i);
                    flag = 1;
                }
                else if (flag == 1 && a[i] < 0)
                {
                    ans.push_back(i);
                    flag = 0;
                }
            }
            ans.push_back(ind);
            cout << ans.size() << endl;
            for (ll i = 0; i < ans.size(); i++)
            {
                cout << ans[i] + 1 << " ";
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}