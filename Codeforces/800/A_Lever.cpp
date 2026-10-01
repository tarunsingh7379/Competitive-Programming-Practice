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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;
        while (1)
        {
            int found = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    a[i]--;
                    found = 1;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] < b[i])
                {
                    a[i]++;
                    break;
                }
            }
            ans++;
            if (!found)
                break;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}