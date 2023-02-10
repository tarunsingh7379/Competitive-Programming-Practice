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
        int a[n], cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                cnt++;
            }
        }
        if (cnt % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = 0;
            cnt /= 2;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 2)
                {
                    cnt--;
                }
                if (cnt == 0)
                {
                    ans = i + 1;
                    break;
                }
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}