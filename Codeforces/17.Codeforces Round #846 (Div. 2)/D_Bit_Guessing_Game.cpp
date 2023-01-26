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
        int cnt;
        cin >> cnt;
        ll ans = 0, pos = 0;
        ll prev = cnt;
        while (cnt)
        {
            cout << "- " << (1 << pos) << endl;
            ll x;
            cin >> x;
            if (x == (prev - 1))
            {
                ans |= (1LL << pos);
                pos++;
            }
            else
            {
                ll d = x - prev + 1;
                pos += d;
                ans |= (1LL << pos);
                pos++;
            }
            prev = x;
            cnt--;
        }
        cout << "! " << ans << endl;
        t--;
    }

    return 0;
}