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
        ll a = 1, b = 0, c = 0, d = 0;
        n--;
        ll cnt = 2;
        ll flag = 1;
        while (n)
        {
            if (flag == 1)
            {
                if (n >= cnt)
                {
                    c += (cnt / 2);
                    d += (cnt + 1) / 2;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    c += (n / 2);
                    d += (n + 1) / 2;
                    break;
                }
                if (n >= cnt)
                {
                    c += (cnt / 2);
                    d += (cnt + 1) / 2;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    c += (n / 2);
                    d += (n + 1) / 2;
                    break;
                }
            }
            else
            {
                if (n >= cnt)
                {
                    a += (cnt + 1) / 2;
                    b += cnt / 2;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    a += (n + 1) / 2;
                    b += n / 2;
                    break;
                }
                if (n >= cnt)
                {
                    a += (cnt + 1) / 2;
                    b += cnt / 2;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    a += (n + 1) / 2;
                    b += n / 2;
                    break;
                }
            }
            flag ^= 1;
        }
        cout << a << " " << b << " " << c << " " << d << endl;
        t--;
    }

    return 0;
}