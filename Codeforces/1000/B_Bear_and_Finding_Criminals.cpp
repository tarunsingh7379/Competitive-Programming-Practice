#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    k--;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = k - 1, j = k + 1;
    int ans = 0;
    if (a[k] == 1)
    {
        ans++;
    }
    while (i >= 0 && j < n)
    {
        if (a[i] + a[j] == 2)
        {
            ans += 2;
        }
        i--;
        j++;
    }
    while (i >= 0)
    {
        if (a[i] == 1)
        {
            ans++;
        }
        i--;
    }
    while (j < n)
    {
        if (a[j] == 1)
        {
            ans++;
        }
        j++;
    }
    cout << ans << endl;
    return 0;
}