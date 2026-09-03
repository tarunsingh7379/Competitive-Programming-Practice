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
    vector<int> v;
    for (int i = 1; i < 10; i++)
    {
        ll p = 1;
        for (int j = 1; j <= 7; j++)
        {
            v.push_back(i * p);
            p *= 10;
        }
    }
    sort(v.begin(), v.end());
    while (t)
    {
        ll n;
        cin >> n;
        ll ans = upper_bound(v.begin(), v.end(), n) - v.begin();
        cout << ans << endl;
        t--;
    }

    return 0;
}