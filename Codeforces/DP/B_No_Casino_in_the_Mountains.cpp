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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (cnt == k)
            {
                ans++;
                cnt = 0;
                i++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}