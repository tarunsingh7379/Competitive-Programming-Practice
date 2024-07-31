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
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt += (a[i] != b[i]);
    }
    cout << (cnt <= 2 ? "YES" : "NO") << endl;

    return 0;
}