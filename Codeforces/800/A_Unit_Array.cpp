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
        int cntPlusOne = 0, cntMinusOne = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                cntPlusOne++;
            }
            else
            {
                cntMinusOne++;
            }
        }
        int ans = 0;
        if (cntMinusOne % 2 != 0)
        {
            cntMinusOne--;
            cntPlusOne++;
            ans++;
        }
        while (cntMinusOne > cntPlusOne)
        {
            cntMinusOne -= 2;
            cntPlusOne += 2;
            ans += 2;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}