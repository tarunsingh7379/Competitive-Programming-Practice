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
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                ok = false;
                break;
            }
            if (a[i] == b[i])
            {
                continue;
            }
            int pos1 = -1, pos2 = -1;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] == b[i])
                {
                    pos1 = j;
                    break;
                }
                if (a[j] > b[i])
                {
                    break;
                }
                if (b[j] < b[i])
                {
                    break;
                }
            }
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == b[i])
                {
                    pos2 = j;
                    break;
                }
                if (a[j] > b[i])
                {
                    break;
                }
                if (b[j] < b[i])
                {
                    break;
                }
            }
            if (pos1 == -1 && pos2 == -1)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}