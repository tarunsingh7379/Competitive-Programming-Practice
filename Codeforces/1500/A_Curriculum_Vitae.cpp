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
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            ans--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int tot = 0;
        for (int j = 0; j <= i; j++)
        {
            if (a[j] == 1)
            {
                tot++;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] == 0)
            {
                tot++;
            }
        }
        ans = max(ans, n - tot);
    }
    cout << ans << endl;

    return 0;
}