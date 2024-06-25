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
        vector<int> v(n, 0);
        v[n - 1] = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            v[i] = v[i + 1];
            if (a[i] != a[i + 1])
            {
                v[i] = i + 1;
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            if (v[x] <= y && v[x] != -1)
            {
                cout << x + 1 << " " << v[x] + 1 << endl;
            }
            else
            {
                cout << -1 << " " << -1 << endl;
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}