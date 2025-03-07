#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 1, r = n - 2;
        while (l < r)
        {

            if (a[l] == a[l - 1] || a[r] == a[r + 1])
            {
                swap(a[l], a[r]);
            }
            l++;
            r--;
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}