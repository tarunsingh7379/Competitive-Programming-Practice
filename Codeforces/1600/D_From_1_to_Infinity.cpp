#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll sum = 0;
    for (ll i = 1; i <= 10000005; i++)
    {
        sum += to_string(i).size();
    }
    cout << sum << endl;

    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        t--;
    }

    return 0;
}