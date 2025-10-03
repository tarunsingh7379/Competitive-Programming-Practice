#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<ll, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int sum = 0, mi = INT_MAX;
        for (auto c : s)
        {
            if (c == '(')
            {
                sum++;
            }
            else
            {
                sum--;
            }
            mi = min(mi, sum);
        }
        if ((sum >= 0 && mi >= 0) || (sum <= 0 && mi >= sum))
        {
            if (sum == 0)
            {
                ans = ans + mp[0] * 2 + 1;
            }
            else
            {
                ans = ans + mp[-sum];
            }
            mp[sum]++;
        }
    }
    cout << ans << endl;

    return 0;
}