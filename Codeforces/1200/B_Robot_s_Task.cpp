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
    int ans = 0, have = 0;
    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != -1 && a[i] <= have)
            {
                a[i] = -1;
                have++;
            }
        }
        if (have == n)
        {
            break;
        }
        ans++;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != -1 && a[i] <= have)
            {
                a[i] = -1;
                have++;
            }
        }
        if (have == n)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}