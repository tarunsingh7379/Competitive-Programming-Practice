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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        vector<int> freq_a(30, 0), freq_b(30, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (a[i] & (1 << j))
                {
                    freq_a[j]++;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (b[i] & (1 << j))
                {
                    freq_b[j]++;
                }
            }
        }
        int mi = 0, ma = 0;

        if (n % 2)
        {
            for (int i = 0; i < n; i++)
            {
                mi ^= a[i];
            }
            for (int i = 0; i < 30; i++)
            {
                if (freq_b[i] || freq_a[i] % 2)
                {
                    ma |= (1 << i);
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ma ^= a[i];
            }
            for (int i = 0; i < 30; i++)
            {
                if (freq_b[i] || (freq_a[i] % 2 == 0))
                {
                }
                else
                {
                    mi |= (1 << i);
                }
            }
        }

        cout << mi << " " << ma << endl;
        t--;
    }

    return 0;
}