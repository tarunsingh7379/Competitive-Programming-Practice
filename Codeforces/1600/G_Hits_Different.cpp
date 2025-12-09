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

    vector<ll> ans(2000006, 0);
    vector<vector<ll>> prefix(2005, vector<ll>(2005, 0));
    ll cur = 1;
    for (int i = 1; i <= 2000; i++)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            prefix[j][i - j] = prefix[j - 1][i - j] + prefix[j][i - j - 1] - prefix[j - 1][i - j - 1] + cur * cur;
            ans[cur] = prefix[j][i - j];
            cur++;
        }
    }
    while (t)
    {
        ll n;
        cin >> n;
        cout << ans[n] << endl;
        t--;
    }

    return 0;
}