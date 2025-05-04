#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt1++;
        }
    }
    if (cnt1 > 0)
    {
        cout << n - cnt1 << endl;
    }
    else
    {
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int g = a[i];
            for (int j = i + 1; j < n; j++)
            {
                g = __gcd(g, a[j]);
                if (g == 1)
                {
                    ans = min(ans, (j - i) + n - 1);
                    break;
                }
            }
        }
        if (ans == INT_MAX)
        {
            ans = -1;
        }
        cout << ans << endl;
    }

    return 0;
}