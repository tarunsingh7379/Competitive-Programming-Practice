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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }
        ll sum = 0, ans = 1e17;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].second;
            sum += arr[i].second;
        }
        sort(arr.begin(), arr.end());
        ans = min(ans, sum);
        for (ll i = 0; i < n; i++)
        {
            sum -= arr[i].second;
            ans = min(ans, max(sum, arr[i].first));
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}