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
    int sum = 0, mi = 1e8, ma = -1e8;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            sum += a[i];
            if (a[i] & 1)
            {
                mi = min(mi, a[i]);
            }
        }
        else
        {
            if (a[i] & 1)
            {
                ma = max(ma, a[i]);
            }
        }
    }
    if (sum & 1)
    {
        cout << sum << endl;
    }
    else
    {
        cout << max(sum - mi, sum + ma) << endl;
    }
    return 0;
}