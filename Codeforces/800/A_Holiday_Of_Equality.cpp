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
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + (ma - a[i]);
    }

    cout << ans << endl;

    return 0;
}