#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    int len = 1;
    for (int i = 0; i < k; i++)
    {
        int m;
        cin >> m;
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (m > 1)
        {
            if (v[0] == 1)
            {
                len = 1;
                for (auto num : v)
                {
                    if (num != len)
                    {
                        break;
                    }
                    len++;
                }
                len--;
                ans = ans + (m - 1) - (len - 1);
            }
            else
            {
                ans = ans + (m - 1);
            }
        }
    }
    ans = ans + (n - len);
    cout << ans << endl;

    return 0;
}