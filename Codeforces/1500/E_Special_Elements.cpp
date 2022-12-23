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
        int ans = 0;
        int sum = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            l = 0;
            for (int r = 0; r < n; r++)
            {
                if (a[r] >= a[i])
                {
                    sum = 0;
                    l = r + 1;
                }
                else
                {
                    sum += a[r];
                    while (l < r && sum > a[i])
                    {
                        sum -= a[l];
                        l++;
                    }
                    if (sum == a[i])
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}