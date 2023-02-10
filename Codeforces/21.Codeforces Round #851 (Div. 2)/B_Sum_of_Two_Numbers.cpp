#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, ll y)
{
    ll sum1 = 0, sum2 = 0;
    while (x)
    {
        sum1 += (x % 10);
        x /= 10;
    }
    while (y)
    {
        sum2 += (y % 10);
        y /= 10;
    }
    return (abs(sum1 - sum2) <= 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int x = n / 2, y = (n + 1) / 2;
        if (n % 2 == 0)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            if (x % 10 == 9)
            {
                int cnt = 0;
                while (x % 10 == 9)
                {
                    cnt++;
                    x /= 10;
                    y /= 10;
                }
                for (int i = 0; i < cnt; i++)
                {
                    x = x * 10 + 5;
                    y = y * 10 + 4;
                    swap(x, y);
                }
                cout << x << " " << y << endl;
            }
            else
            {
                cout << x << " " << y << endl;
            }
        }
        t--;
    }

    return 0;
}