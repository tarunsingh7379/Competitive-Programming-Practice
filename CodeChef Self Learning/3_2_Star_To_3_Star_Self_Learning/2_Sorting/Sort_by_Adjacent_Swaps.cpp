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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b = a;
    sort(b.begin(), b.end());
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            ll pos = -1;
            for (ll j = i + 1; j < n; j++)
            {
                if (a[j] == b[i])
                {
                    pos = j;
                    break;
                }
            }
            for (ll j = pos - 1; j >= i; j--)
            {
                swap(a[j], a[j + 1]);
                ans.push_back(j);
            }
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}