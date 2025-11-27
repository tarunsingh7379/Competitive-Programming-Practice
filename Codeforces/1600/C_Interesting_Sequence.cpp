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
        ll n, m;
        cin >> n >> m;

        ll cur = n;
        while (cur > m)
        {
            n = n + (n & -n);
            cur &= n;
        }
        cout << (cur == m ? n : -1) << endl;
        t--;
    }

    return 0;
}