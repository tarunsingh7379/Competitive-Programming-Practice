#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int n)
{
    for (int i = 1; i < 30; i++)
    {
        int x = ((1 << i) - 1) * (1 << (i - 1));
        if (x == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (check(i))
            {
                ans = max(ans, i);
            }
            if (check(n / i))
            {
                ans = max(ans, n / i);
            }
        }
    }
    if (check(n))
    {
        ans = n;
    }
    cout << ans << endl;

    return 0;
}