#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
p = positive
n = negative

(p-n)*x = 0, here x != 0
(p-n) = 0, ans is yes

k1*x + (p-k1)*y - k2*x - (n-k2)*y = 0
x*(k1-k2) - y*(k1-k2) + y*(p-n) = 0
(k1-k2)(x-y) = -y (p-n)
(k1-k2)(x-y) = y(n-p)
(k1-k2) = y*(n-p)/(x-y)

0 <= k1 <= p
0 <= k2 <= n

-n <= k1-k2 <= p

*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    cin >> N;
    string s;
    cin >> s;
    ll p = 0, n = 0;
    for (auto c : s)
    {
        if (c == '+')
        {
            p++;
        }
        else
        {
            n++;
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            swap(x, y);
        }
        if (p == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (x == y)
            {
                cout << "NO" << endl;
            }
            else
            {
                ll r = ((y * (p - n)) % (y - x));
                if (r != 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    ll d = (y * (p - n)) / (y - x);
                    cout << ((d >= -n && d <= p) ? "YES" : "NO") << endl;
                }
            }
        }
    }

    return 0;
}