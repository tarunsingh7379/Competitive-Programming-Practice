#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    ll fact[200005];
    fact[0] = 1;
    for (ll i = 1; i < 200005; i++)
    {
        fact[i] = (fact[i - 1] * i) % M;
    }
    while (t)
    {
        string s;
        cin >> s;
        ll cnt = 0, ans = 1, temp_cnt = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                temp_cnt++;
            }
            else
            {
                cnt += (temp_cnt - 1);
                ans = (ans * temp_cnt) % M;
                temp_cnt = 1;
            }
        }
        cnt += (temp_cnt - 1);
        ans = (ans * temp_cnt) % M;
        ans = (ans * fact[cnt]) % M;
        cout << cnt << " " << ans << endl;
        t--;
    }

    return 0;
}