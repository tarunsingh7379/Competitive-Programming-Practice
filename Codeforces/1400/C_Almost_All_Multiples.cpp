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
        int n, k;
        cin >> n >> k;
        vector<int> ans(n + 1, 0);
        if (n % k != 0)
        {
            cout << -1 << endl;
            goto cont;
        }

        ans[1] = k;
        ans[n] = 1;
        for (int i = 2; i < n; i++)
        {
            ans[i] = i;
        }
        while (k < n)
        {
            int x = 2 * k;
            while (n % x != 0)
            {
                x += k;
            }
            ans[k] = x;
            k = x;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    cont:;
        t--;
    }

    return 0;
}