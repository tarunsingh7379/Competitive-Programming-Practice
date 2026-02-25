#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    ll ans = 0;
    ll n = s.size();
    vector<ll> pow(n, 0);
    pow[0] = 1;
    for (ll i = 1; i < n; i++)
    {
        pow[i] = (pow[i - 1] * 2) % M;
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans = (ans + ((pow[i] * pow[i]) % M * pow[n - 1 - i]) % M) % M;
        }
    }
    cout << ans << endl;

    return 0;
}