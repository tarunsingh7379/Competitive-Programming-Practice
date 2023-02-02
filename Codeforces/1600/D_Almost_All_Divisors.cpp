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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll num = a[0] * a[n - 1];
        vector<ll> v;
        for (ll i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                v.push_back(i);
                if (num / i != i)
                {
                    v.push_back(num / i);
                }
            }
        }
        sort(v.begin(), v.end());
        if (a == v)
        {
            cout << num << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        t--;
    }

    return 0;
}