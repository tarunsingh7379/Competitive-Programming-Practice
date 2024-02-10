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
    int mi = INT_MAX, ma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mi = min(mi, a[i]);
        ma = max(ma, a[i]);
    }
    if (k == 1)
    {
        cout << mi << endl;
    }
    else if (k == 2)
    {
        cout << max(a[0], a[n - 1]) << endl;
    }
    else
    {
        cout << ma << endl;
    }
    return 0;
}