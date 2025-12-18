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
        int n, m, k;
        cin >> n >> m >> k;
        string ans;
        int flag = 1;
        int a = '0', b = '1';
        if (n < m)
        {
            swap(n, m);
            swap(a, b);
        }
        if (n < k || abs(n - m) > k)
        {
            cout << -1 << endl;
        }
        else
        {
            int cnt = 0;
            while (n > 0 && cnt < k)
            {
                ans.push_back(a);
                cnt++;
                n--;
            }
            flag = 0;
            while (n > 0 && m > 0)
            {
                if (flag)
                {
                    ans.push_back(a);
                    n--;
                }
                else
                {
                    ans.push_back(b);
                    m--;
                }
                flag ^= 1;
            }
            for (int i = 0; i < n; i++)
            {
                ans.push_back(a);
            }
            for (int i = 0; i < m; i++)
            {
                ans.push_back(b);
            }
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}