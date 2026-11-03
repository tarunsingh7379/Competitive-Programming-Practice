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
        int n, k, p;
        cin >> n >> k >> p;
        if (k > n * p || k < -n * p)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ((abs(k) + p - 1) / p) << "\n";
        }
        t--;
    }

    return 0;
}