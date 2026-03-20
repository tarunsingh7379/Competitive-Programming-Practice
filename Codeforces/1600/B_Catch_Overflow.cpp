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
    vector<ll> arr;
    ll p = 1, ma = (1LL << 32) - 1, upper = (1LL << 34);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "for")
        {
            ll x;
            cin >> x;
            p *= x;
            p = min(p, upper);
            arr.push_back(p);
        }
        else if (s == "end")
        {
            arr.pop_back();
            if (arr.size() > 0)
            {
                p = arr.back();
            }
            else
            {
                p = 1;
            }
        }
        else
        {
            ans += p;
            if (ans > ma)
            {
                cout << "OVERFLOW!!!" << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}