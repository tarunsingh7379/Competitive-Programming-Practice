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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] % 2 == a[i - 1] % 2)
            {
                cnt++;
            }
            else
            {
                ans += (cnt - 1);
                cnt = 1;
            }
        }
        ans += (cnt - 1);
        cout << ans << endl;
        t--;
    }

    return 0;
}