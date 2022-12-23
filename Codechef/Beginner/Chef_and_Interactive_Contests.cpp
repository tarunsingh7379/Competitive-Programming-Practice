#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, r;
    cin >> n >> r;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= r)
        {
            cout << "Good boi" << endl;
        }
        else
        {
            cout << "Bad boi" << endl;
        }
    }

    return 0;
}