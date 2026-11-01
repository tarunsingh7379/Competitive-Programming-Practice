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
        int odd = (k + n % 2) / 2;
        cout << (odd % 2 == 0 ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}