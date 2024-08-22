#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll left = 1, right = 1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            left++;
        }
        else
        {
            break;
        }
    }
    for (ll i = n - 1; i > 0; i--)
    {
        if (s[i] == s[i - 1])
        {
            right++;
        }
        else
        {
            break;
        }
    }

    ll ans = 0;
    if (s[0] == s[n - 1])
    {
        ans = ((left + 1) * (right + 1)) % M;
    }
    else
    {
        ans = (left + right + 1);
    }
    cout << ans << endl;

    return 0;
}