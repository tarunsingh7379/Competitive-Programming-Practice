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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        int x = 0, y = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            int dx = a[i] - x;
            int dy = b[i] - y;
            if (!(dx >= 0 && dy >= 0 && dy <= dx))
            {
                flag = 0;
                break;
            }
            x = a[i];
            y = b[i];
        }
        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}