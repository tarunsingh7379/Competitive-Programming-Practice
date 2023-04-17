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
        int l = 0, r = n - 1;
        int ans = 0;
        while (l < r)
        {
            if (a[l] == a[r])
            {
                if (a[l] == 1)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            else
            {
                if (a[l] == 0)
                {
                    l++;
                }
                else
                {
                    ans++;
                    l++;
                    r--;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}