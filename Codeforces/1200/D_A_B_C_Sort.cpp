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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c[n];
        for (ll i = n - 1; i >= 0; i -= 2)
        {
            c[i] = a[i];
            if (i - 1 >= 0)
            {
                c[i - 1] = a[i - 1];
                if (c[i - 1] > c[i])
                {
                    swap(c[i], c[i - 1]);
                }
            }
        }
        if (is_sorted(c, c + n))
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