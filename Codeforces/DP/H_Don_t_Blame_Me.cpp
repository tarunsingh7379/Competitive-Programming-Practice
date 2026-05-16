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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> cur(64, vector<int>(2, 0)), next(64, vector<int>(2, 0));
        for (int bitwise_and = 0; bitwise_and < 64; bitwise_and++)
        {
            for (int pick = 0; pick < 2; pick++)
            {
                next[bitwise_and][pick] = (pick && __builtin_popcount(bitwise_and) == k);
            }
        }
        ll ans = 0;
        for (int ind = n - 1; ind >= 0; ind--)
        {
            for (int bitwise_and = 0; bitwise_and < 64; bitwise_and++)
            {
                for (int pick = 0; pick < 2; pick++)
                {
                    ans = 0;
                    if (!pick)
                    {
                        ans = (ans + next[a[ind]][1]) % M;
                    }
                    else
                    {
                        ans = (ans + next[bitwise_and & a[ind]][pick]) % M;
                    }
                    ans = (ans + next[bitwise_and][pick]) % M;
                    cur[bitwise_and][pick] = ans;
                }
            }
            swap(cur, next);
        }
        cout << next[0][0] << endl;
        t--;
    }

    return 0;
}