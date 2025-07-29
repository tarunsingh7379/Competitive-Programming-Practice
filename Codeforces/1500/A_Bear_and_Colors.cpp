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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans(n, 0);
    vector<int> freq(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        for (auto &num : freq)
        {
            num = 0;
        }
        ll cur = 0;
        for (ll j = i; j < n; j++)
        {
            freq[a[j]]++;
            if ((freq[a[j]] > freq[cur]) || (freq[a[j]] == freq[cur] && a[j] < cur))
            {
                cur = a[j];
            }
            ans[cur - 1]++;
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}