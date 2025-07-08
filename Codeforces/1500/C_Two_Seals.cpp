#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b;
    cin >> n >> a >> b;
    ll arr[n][2];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            bool ok = false;
            ok |= (arr[i][0] <= a && arr[j][0] <= a && (arr[i][1] + arr[j][1]) <= b);
            ok |= (arr[i][0] <= a && arr[j][1] <= a && (arr[i][1] + arr[j][0]) <= b);
            ok |= (arr[i][1] <= a && arr[j][1] <= a && (arr[i][0] + arr[j][0]) <= b);
            ok |= (arr[i][1] <= a && arr[j][0] <= a && (arr[i][0] + arr[j][1]) <= b);
            swap(a, b);
            ok |= (arr[i][0] <= a && arr[j][0] <= a && (arr[i][1] + arr[j][1]) <= b);
            ok |= (arr[i][0] <= a && arr[j][1] <= a && (arr[i][1] + arr[j][0]) <= b);
            ok |= (arr[i][1] <= a && arr[j][1] <= a && (arr[i][0] + arr[j][0]) <= b);
            ok |= (arr[i][1] <= a && arr[j][0] <= a && (arr[i][0] + arr[j][1]) <= b);
            swap(a, b);
            if (ok)
            {
                ans = max(ans, arr[i][0] * arr[i][1] + arr[j][0] * arr[j][1]);
            }
        }
    }
    cout << ans << endl;

    return 0;
}