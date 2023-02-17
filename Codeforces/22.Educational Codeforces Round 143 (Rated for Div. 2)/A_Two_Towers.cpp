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
        string a, b;
        cin >> a >> b;
        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cnt1++;
            }
        }
        for (ll i = 0; i < m - 1; i++)
        {
            if (b[i] == b[i + 1])
            {
                cnt2++;
            }
        }
        if (cnt1 == 0 && cnt2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (((cnt1 + cnt2) == 1) && (a.back() != b.back()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}