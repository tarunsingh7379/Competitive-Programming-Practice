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
        vector<ll> a;
        for (ll i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        for (ll i = n - 2; i >= 0; i -= 2)
        {
            swap(a[i], a[i + 1]);
        }
        for (auto num : a)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}