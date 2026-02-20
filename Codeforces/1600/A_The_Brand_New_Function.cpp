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
    set<ll> ans, prev;
    for (ll i = 0; i < n; i++)
    {
        set<ll> temp;
        temp.insert(a[i]);
        for (auto it : prev)
        {
            temp.insert(it | a[i]);
        }
        prev = temp;
        for (auto it : temp)
        {
            ans.insert(it);
        }
    }
    cout << ans.size() << endl;

    return 0;
}