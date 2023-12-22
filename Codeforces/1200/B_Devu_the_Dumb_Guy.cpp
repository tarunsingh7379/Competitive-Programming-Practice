#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + 1LL * a[i] * max(x - i, 1);
    }
    cout << ans << endl;

    return 0;
}