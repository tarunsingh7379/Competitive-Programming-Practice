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

    int have = 4 * 60;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        have -= 5 * i;
        if (have < k)
        {
            break;
        }
        ans = i;
    }
    cout << ans << endl;

    return 0;
}