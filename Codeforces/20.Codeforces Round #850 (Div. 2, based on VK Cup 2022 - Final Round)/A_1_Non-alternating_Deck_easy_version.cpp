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
        ll a = 1, b = 0;
        n--;
        ll cnt = 2;
        ll flag = 1;
        while (n)
        {
            if (flag == 1)
            {
                if (n >= cnt)
                {
                    b += cnt;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    b += n;
                    break;
                }
                if (n >= cnt)
                {
                    b += cnt;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    b += n;
                    break;
                }
            }
            else
            {
                if (n >= cnt)
                {
                    a += cnt;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    a += n;
                    break;
                }
                if (n >= cnt)
                {
                    a += cnt;
                    n -= cnt;
                    cnt++;
                }
                else
                {
                    a += n;
                    break;
                }
            }
            flag ^= 1;
        }
        cout << a << " " << b << endl;
        t--;
    }

    return 0;
}