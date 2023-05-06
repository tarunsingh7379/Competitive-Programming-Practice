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
        sort(a, a + n);
        reverse(a, a + n);
        int cnt = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                cnt++;
            }
            else
            {
                neg++;
                cnt--;
            }
            cout << cnt << " ";
        }
        cout << endl;
        for (int i = 0; i < neg; i++)
        {
            cout << 1 << " " << 0 << " ";
        }
        cnt = 1;
        for (int i = 2 * neg; i < n; i++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;

        t--;
    }

    return 0;
}