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
    int ans = 0, cur = 0;
    for (int i = 1; i < n; i++)
    {
        int req = n - i;
        if (cur < req)
        {
            int rem = k - cur;
            int take = min(rem, req - cur);
            cur += take;
            ans += take * i;
        }
        cur--;
    }
    cout << ans << endl;

    return 0;
}