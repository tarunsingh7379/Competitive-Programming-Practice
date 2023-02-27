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

    ll a[] = {1, 5, 10, 20, 100};

    int ans = 0;

    for (int i = 4; i >= 0; i--)
    {
        while (n >= a[i])
        {
            n -= a[i];
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}