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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'L')
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        ll p = a[l] % k;
        vector<ll> ans;
        ans.push_back(p);
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == 'L')
            {
                l--;
                p = (p * a[l]) % k;
            }
            else
            {
                r++;
                p = (p * a[r]) % k;
            }
            ans.push_back(p);
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}