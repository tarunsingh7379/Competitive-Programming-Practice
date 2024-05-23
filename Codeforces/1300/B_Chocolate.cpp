#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    vector<ll> ind;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i])
        {
            ind.push_back(i);
        }
    }
    ll ans = 1;
    for (ll i = 1; i < ind.size(); i++)
    {
        ans = ans * (ind[i] - ind[i - 1]);
    }
    if (ind.size() == 0)
    {
        ans = 0;
    }
    cout << ans << endl;

    return 0;
}