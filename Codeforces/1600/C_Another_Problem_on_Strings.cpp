#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(string &s, ll k)
{
    ll ans = 0;
    ll l = 0, n = s.size(), cnt = 0;
    for (ll r = 0; r < n; r++)
    {
        if (s[r] == '1')
        {
            cnt++;
        }
        while (l <= r && cnt > k)
        {
            if (s[l] == '1')
            {
                cnt--;
            }
            l++;
        }
        ans += (r - l + 1);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = func(s, k) - func(s, k - 1);
    cout << ans << endl;

    return 0;
}