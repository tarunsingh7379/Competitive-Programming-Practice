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
        ll h, n;
        cin >> h >> n;
        vector<ll> p(n);
        for (auto &x : p)
            cin >> x;
        p.push_back(0);

        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (p[i + 1] - p[i + 2] == 1)
            {
                i++;
            }
            else
            {
                p[i + 1] = p[i] - 2;
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}