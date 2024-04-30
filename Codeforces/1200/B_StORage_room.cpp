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
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> ans(n, ((1 << 30) - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                ans[i] &= a[i][j];
                ans[j] &= a[i][j];
            }
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (a[i][j] != (ans[i] | ans[j]))
                {
                    flag = 0;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (auto num : ans)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}