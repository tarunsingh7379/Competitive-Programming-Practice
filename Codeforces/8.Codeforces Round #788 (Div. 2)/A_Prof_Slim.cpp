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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                cnt++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (cnt > 0)
            {
                a[i] = -abs(a[i]);
                cnt--;
            }
            else
            {
                a[i] = abs(a[i]);
            }
        }
        if (is_sorted(a, a + n))
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