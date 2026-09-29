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
        int cnt_zero = 0, cnt_minus_one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt_zero++;
            }
            else if (a[i] == -1)
            {
                cnt_minus_one++;
            }
        }
        int ans = cnt_zero + (cnt_minus_one & 1 ? 2 : 0);
        cout << ans << endl;
        t--;
    }

    return 0;
}