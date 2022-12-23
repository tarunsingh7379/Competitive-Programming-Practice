#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt0 = 0, cnt5 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            cnt0++;
        }
        else
        {
            cnt5++;
        }
    }
    ll use = 0;
    for (int i = 1; i <= cnt5; i++)
    {
        if ((5 * i) % 9 == 0)
        {
            use = i;
        }
    }
    if (cnt0 > 0)
    {
        for (ll i = 0; i < use; i++)
        {
            cout << 5;
        }
        if (use > 0)
        {
            for (ll i = 0; i < cnt0; i++)
            {
                cout << 0;
            }
            cout << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}