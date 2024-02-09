#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> ans;
    for (ll i = 1; i <= 100; i++)
    {
        ll rem = n - i;
        string s = to_string(rem);
        ll sum = 0;
        for (auto c : s)
        {
            sum = sum + (c - '0');
        }
        if (sum == i)
        {
            ans.push_back(rem);
        }
    }
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto num : ans)
    {
        cout << num << endl;
    }

    return 0;
}