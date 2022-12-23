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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = -1;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] % 2 != a[i - 1] % 2 && a[i] % 2 != a[i + 1] % 2)
        {
            ans = i;
            break;
        }
    }
    if (ans != -1)
    {
        ans++;
        cout << ans << endl;
    }
    else
    {
        if (a[0] % 2 != a[1] % 2 && a[0] % 2 != a[2] % 2)
        {
            ans = 0;
        }
        if (a[n - 1] % 2 != a[n - 2] % 2 && a[n - 1] % 2 != a[n - 3] % 2)
        {
            ans = n - 1;
        }
        ans++;
        cout << ans << endl;
    }
    return 0;
}