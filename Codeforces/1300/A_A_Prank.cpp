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
    int cnt = 1;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] == 1)
        {
            cnt++;
        }
        else
        {
            if (a[0] == 1 && a[i - 1] == i)
            {
                ans = max(ans, cnt - 1);
            }
            else
            {
                ans = max(ans, cnt - 2);
            }
            cnt = 1;
        }
    }
    if (cnt != 1)
    {
        if (a[n - 1] == 1000)
        {
            ans = max(ans, cnt - 1);
        }
        else if (a[0] == 1 && a[n - 1] == n)
        {
            ans = max(ans, cnt - 1);
        }
        else
        {
            ans = max(ans, cnt - 2);
        }
    }
    cout << ans << endl;

    return 0;
}