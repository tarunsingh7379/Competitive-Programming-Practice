#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
            ans -= a[i];
        else
            break;
    }

    cout << ans << endl;

    return 0;
}