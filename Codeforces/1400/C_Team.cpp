#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if (n <= m)
    {
        if ((n + 1) * 2 >= m)
        {
            int sz = n + (n + 1) * 2;
            vector<int> ans(sz, -1);
            for (int i = 2; i < sz; i += 3)
            {
                ans[i] = 0;
            }
            for (int j = 0; j < 2; j++)
            {
                for (int i = j; i < sz && m > 0; i += 3)
                {
                    ans[i] = 1;
                    m--;
                }
            }
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] != -1)
                {
                    cout << ans[i];
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (n == m + 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "01";
            }
            cout << "0" << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}