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
    vector<ll> v;
    for (ll i = 0; i < (1 << 10); i++)
    {
        ll sum = 0, p = 1;
        for (ll j = 0; j < 10; j++)
        {
            if (i & (1 << j))
            {
                sum += p;
            }
            p *= 3;
        }
        v.push_back(sum);
    }
    sort(v.begin(), v.end());
    while (t)
    {
        ll n;
        cin >> n;
        cout << *lower_bound(v.begin(), v.end(), n) << endl;
        t--;
    }

    return 0;
}