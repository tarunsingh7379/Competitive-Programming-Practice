#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    int ans = 13;

    for (int i = 0; i < (1 << 12); i++)
    {
        int h = 0, cnt = 0;
        for (int j = 0; j < 12; j++)
        {
            if (i & (1 << j))
            {
                h += a[j];
                cnt++;
            }
        }
        if (h >= k)
        {
            ans = min(ans, cnt);
        }
    }

    if (ans == 13)
    {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}