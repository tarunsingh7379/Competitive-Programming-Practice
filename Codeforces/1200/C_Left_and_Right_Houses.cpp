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
        string s;
        cin >> s;
        vector<ll> prefix(n, 0);
        prefix[0] = s[0] - '0';
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + (s[i] - '0');
        }
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            ll left = 0, right = 0;
            if (i - 1 >= 0)
            {
                left = i - prefix[i - 1];
            }
            right = prefix[n - 1];
            if (i - 1 >= 0)
            {
                right -= prefix[i - 1];
            }
            if (left >= (i + 1) / 2 && right >= (n - i + 1) / 2)
            {
                ans.push_back(i);
            }
        }
        ll left = n - prefix[n - 1];
        if (left >= (n + 1) / 2)
        {
            ans.push_back(n);
        }
        ll mi = INT_MAX, ind = 0;
        for (auto num : ans)
        {
            if (abs(n - 2 * num) < mi)
            {
                mi = abs(n - 2 * num);
                ind = num;
            }
        }
        cout << ind << endl;
        t--;
    }

    return 0;
}