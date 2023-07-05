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

    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a, a + m);

    int ans = INT_MAX;
    for (int i = 0; i + n - 1 <= m; i++)
    {
        ans = min(ans, a[i + n - 1] - a[i]);
    }
    cout << ans << endl;
    
    return 0;
}