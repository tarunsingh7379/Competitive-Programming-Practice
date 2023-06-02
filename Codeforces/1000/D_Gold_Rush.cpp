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
        ll n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << "YES" << endl;
        }
        else if (n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll a = n / 3;
            ll b = 2 * a;
            queue<ll> q;
            q.push(a);
            q.push(b);
            ll flag = 0;
            while (!q.empty())
            {
                ll x = q.front();
                q.pop();
                if (x == m)
                {
                    flag = 1;
                    break;
                }
                if (x % 3 == 0)
                {
                    ll z = x / 3;
                    q.push(z);
                    q.push(2 * z);
                }
            }
            cout << (flag ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}