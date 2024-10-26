#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c, t;
    cin >> n >> a >> b >> c >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a;
        if (c - b > 0)
        {
            ans += (t - arr[i]) * (c - b);
        }
    }
    cout << ans << endl;

    return 0;
}