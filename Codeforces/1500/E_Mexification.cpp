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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll cnt = 0;
        vector<ll> prev;
        while (k > 0 && cnt < 5)
        {
            prev = a;
            int mx = 0;
            for (int i = 0; i < n; i++)
            {
                if (mx ==)
            }
            k--;
            cnt++;
        }
        t--;
    }

    return 0;
}