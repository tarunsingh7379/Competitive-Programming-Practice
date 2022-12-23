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
        vector<ll> v;
        for (ll i = 1; i <= 40; i++)
        {
            v.push_back(i * i);
        }
        reverse(v.begin(), v.end());
        ll ans = 0;
        while (n)
        {

            for (auto num : v)
            {
                if (num <= n)
                {

                    n = n - num;
                    ans++;
                    break;
                }
            }
        }

        cout << ans << endl;

        t--;
    }

    return 0;
}