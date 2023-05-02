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
        int n, k;
        cin >> n >> k;
        int cnt = -1;
        for (int i = 0; i <= n; i++)
        {
            int pairs = i * (i - 1) / 2 + (n - i) * (n - i - 1) / 2;
            if (pairs == k)
            {
                cnt = i;
                break;
            }
        }
        if (cnt == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < cnt; i++)
            {
                cout << 1 << " ";
            }
            for (int i = 0; i < (n - cnt); i++)
            {
                cout << -1 << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}