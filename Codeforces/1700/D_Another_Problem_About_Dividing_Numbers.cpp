#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int prime_factors(int x)
{
    int cnt = 0;
    for (int i = 2; i * i <= x; i++)
    {
        while (x % i == 0)
        {
            cnt++;
            x = x / i;
        }
    }
    if (x != 1)
    {
        cnt++;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll a, b, k;
        cin >> a >> b >> k;

        if (a > b)
        {
            swap(a, b);
        }

        ll mi;
        if (a == b)
        {
            mi = 2;
        }
        else if (b % a == 0)
        {
            mi = 1;
        }
        else
        {
            mi = 2;
        }

        int cnt1 = prime_factors(a);
        int cnt2 = prime_factors(b);
        int total = cnt1 + cnt2;

        if (total >= k && k >= mi)
        {
            if (k == 1 && mi == 1)
            {
                cout << "YES" << endl;
            }
            else if (k != 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}