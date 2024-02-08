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
    int ans = n - 1;
    int r = n - 1;
    while (r > 0 && a[r - 1] == a[r])
    {
        r--;
    }
    if (r <= k - 1)
    {
        cout << r << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}