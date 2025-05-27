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
        int n;
        cin >> n;
        int ans = 0, largest_bit = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (n & (1 << i))
            {
                largest_bit = i;
                break;
            }
        }
        if ((1 << (largest_bit + 1)) - 1 == n)
        {
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    ans = max(ans, i);
                    if (n / i < n)
                        ans = max(ans, n / i);
                }
            }
        }
        else
        {
            ans = (1 << (largest_bit + 1)) - 1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}