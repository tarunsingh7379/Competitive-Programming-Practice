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
        ll n, k, x;
        cin >> n >> k >> x;
        ll mi = k * (k + 1) / 2;
        ll ma = k * (n - k + 1 + n) / 2;
        cout << (x >= mi && x <= ma ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}