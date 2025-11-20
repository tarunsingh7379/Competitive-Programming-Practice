#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll solve(vector<ll> &a)
{
    priority_queue<ll> pq;
    ll sum = 0, ans = 0;
    for (auto num : a)
    {
        sum += num;
        pq.push(-num);
        while (sum < 0)
        {
            sum += 2 * pq.top();
            pq.pop();
            ans++;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> v1, v2;
        for (ll i = k - 1; i > 0; i--)
        {
            v1.push_back(-a[i]);
        }
        for (ll i = k; i < n; i++)
        {
            v2.push_back(a[i]);
        }
        cout << solve(v1) + solve(v2) << endl;
        t--;
    }

    return 0;
}