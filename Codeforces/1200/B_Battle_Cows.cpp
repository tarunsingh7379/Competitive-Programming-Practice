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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        k--;
        int ind = -1;
        if (k != 0)
        {
            for (int i = 0; i < k; i++)
            {
                if (a[i] > a[k])
                {
                    ind = i;
                    break;
                }
            }
            int ans = 0;
            if (ind != -1)
            {
                swap(a[0], a[k]);
                int cnt = 0;
                for (int i = 1; i < n; i++)
                {
                    if (a[i] < a[0])
                    {
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                ans = max(ans, cnt);
                cnt = 0;
                swap(a[0], a[k]);
                swap(a[ind], a[k]);
                for (int i = max(0, ind - 1); i < n; i++)
                {
                    if (a[i] < a[ind])
                    {
                        cnt++;
                    }
                    else if (a[i] > a[ind])
                    {
                        break;
                    }
                }
                ans = max(ans, cnt);
            }
            else
            {
                int cnt = 0;
                swap(a[0], a[k]);
                for (int i = 1; i < n; i++)
                {
                    if (a[i] < a[0])
                    {
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                ans = max(ans, cnt);
            }
            cout << ans << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 1; i < n; i++)
            {
                if (a[i] < a[k])
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}