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
        int n, k, z;
        cin >> n >> k >> z;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> prefix(n, 0);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        int ans = 0;
        int sum = a[0];
        for (int i = 1; i < n; i++)
        {
            sum += a[i];
            int used = i;
            int rem = k - used;
            if (rem < 0)
            {
                break;
            }
            int moves = min((rem + 1) / 2, z);
            int got = moves * a[i - 1] + min(rem / 2, moves) * a[i];
            int extra = rem - moves - min(rem / 2, moves);
            int extra_got = prefix[i + extra] - prefix[i];
            ans = max(ans, sum + got + extra_got);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}