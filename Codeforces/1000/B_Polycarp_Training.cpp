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
    int ans = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= ans + 1)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}