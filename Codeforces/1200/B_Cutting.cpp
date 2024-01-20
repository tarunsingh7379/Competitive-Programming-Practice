#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[101][101][101];

int func(int ind, int k, int last_cut, vector<int> &a, vector<int> &prefix_odd, vector<int> &prefix_even)
{
    int odd = prefix_odd[ind];
    if (last_cut != -1)
    {
        odd -= prefix_odd[last_cut];
    }
    int even = prefix_even[ind];
    if (last_cut != -1)
    {
        even -= prefix_even[last_cut];
    }
    if (ind == a.size() - 1)
    {
        if (odd != even)
            return -1e7;
        return 0;
    }
    if (dp[ind][k][last_cut] != -1)
    {
        return dp[ind][k][last_cut];
    }
    int ans = 0;
    if (odd == even && k >= abs(a[ind + 1] - a[ind]))
        ans = max(ans, 1 + func(ind + 1, k - abs(a[ind + 1] - a[ind]), ind, a, prefix_odd, prefix_even));
    ans = max(ans, func(ind + 1, k, last_cut, a, prefix_odd, prefix_even));
    return dp[ind][k][last_cut] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> prefix_odd(n, 0), prefix_even(n, 0);
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        prefix_odd[i] = odd;
        prefix_even[i] = even;
    }
    memset(dp, -1, sizeof(dp));
    int ans = func(0, k, -1, a, prefix_odd, prefix_even);
    cout << ans << endl;
    return 0;
}