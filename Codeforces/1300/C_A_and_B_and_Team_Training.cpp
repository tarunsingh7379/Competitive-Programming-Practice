#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int single_exp = i, double_exp = (n - i) / 2;
        int teams = min(single_exp, m / 2);
        int rem_newbies = m - 2 * teams;
        teams += min(double_exp, rem_newbies);
        ans = max(ans, teams);
    }
    cout << ans << endl;

    return 0;
}