#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int n, int i, vector<int> &a)
{
    bool ok = true;
    int even = 0, odd = 0, g1 = 0, g2 = 0;
    for (int j = 0; j < i; j++)
    {
        g1 = 0;
        for (int k = j + i; k < n; k += i)
        {
            g1 = __gcd(g1, abs(a[k] - a[k - i]));
        }
        g2 = __gcd(g2, g1);
        if (g2 == 1)
        {
            ok = false;
            break;
        }
    }
    return ok;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (check(n, i, a))
                    ans++;
                if (n / i != i && check(n, n / i, a))
                    ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}