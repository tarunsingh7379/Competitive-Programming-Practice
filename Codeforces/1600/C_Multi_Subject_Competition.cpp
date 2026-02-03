#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> subjects(m + 1);
    for (ll i = 0; i < n; i++)
    {
        ll s, r;
        cin >> s >> r;
        subjects[s].push_back(r);
    }
    vector<ll> prefix_sums(n + 5, 0);
    for (ll i = 1; i <= m; i++)
    {
        sort(subjects[i].rbegin(), subjects[i].rend());
        ll sum = 0;
        for (ll j = 0; j < subjects[i].size(); j++)
        {
            sum += subjects[i][j];
            if (sum < 0)
                break;
            prefix_sums[j + 1] += sum;
        }
    }
    ll ans = 0;
    for (auto num : prefix_sums)
    {
        ans = max(ans, num);
    }
    cout << ans << endl;
    return 0;
}