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
        ll v[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool ok = true;
        ll prev_a = v[0], prev_b = 0;
        ll cur_a = 0, cur_b = 0;
        for (ll i = 1; i < n; i++)
        {
            cur_a = min(prev_a, v[i] - prev_b);
            if (cur_a < 0)
            {
                ok = false;
                break;
            }
            cur_b = v[i] - cur_a;
            if (cur_b < prev_b)
            {
                ok = false;
                break;
            }
            prev_a = cur_a;
            prev_b = cur_b;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}