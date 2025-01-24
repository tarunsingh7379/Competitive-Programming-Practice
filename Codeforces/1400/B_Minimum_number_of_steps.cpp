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
    ll ans = 0, cnt = 0, n = s.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
        {
            ans = (ans + cnt) % M;
            cnt = (cnt + cnt) % M;
        }
        else
        {
            cnt = (cnt + 1) % M;
        }
    }
    cout << ans << endl;
    return 0;
}