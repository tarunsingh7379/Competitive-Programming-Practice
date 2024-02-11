#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> ans(n, 0);
    ll x = 1;
    for (ll i = 0; i < n; i += 2)
    {
        ans[i] = x;
        x++;
    }
    x = n;
    for (ll i = 1; i < n; i += 2)
    {
        ans[i] = x;
        x--;
    }
    if (k % 2 == 0)
    {
        sort(ans.begin() + k - 1, ans.end(), greater<int>());
    }
    else
    {
        sort(ans.begin() + k - 1, ans.end());
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}