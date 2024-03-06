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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mi = INT_MAX, sum = 0, ans = 0;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            sum = 0;
            for (int j = i; j < n; j += k)
            {
                sum += a[j];
                vis[j] = 1;
            }
            if (sum < mi)
            {
                mi = sum;
                ans = i + 1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}