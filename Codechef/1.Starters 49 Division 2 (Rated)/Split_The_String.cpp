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
        string s;
        cin >> s;
        ll cnt_0 = 0, cnt_1 = 0;
        for (auto c : s)
        {
            if (c == '0')
            {
                cnt_0++;
            }
            else
            {
                cnt_1++;
            }
        }
        ll d = abs(cnt_0 - cnt_1);
        ll ans = (d + k - 1) / k;
        cout << ans << endl;
        t--;
    }

    return 0;
}