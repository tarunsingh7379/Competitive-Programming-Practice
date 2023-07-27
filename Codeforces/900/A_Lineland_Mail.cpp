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

    for (int i = 0; i < n; i++)
    {
        int mi = INT_MAX, ma = INT_MIN;
        if (i != 0)
        {
            mi = min(mi, a[i] - a[i - 1]);
        }
        if (i != n - 1)
        {
            mi = min(mi, a[i + 1] - a[i]);
        }
        ma = max(ma, a[i] - a[0]);
        ma = max(ma, a[n - 1] - a[i]);
        cout << mi << " " << ma << endl;
    }

    return 0;
}