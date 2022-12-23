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
        string s;
        cin >> s;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> f(10, 0);
            int cnt = 0;
            for (int j = i; j < min(i + 105, n); j++)
            {
                f[s[j] - '0']++;
                if (f[s[j] - '0'] == 1)
                {
                    cnt++;
                }
                int flag = 1;
                for (int k = 0; k < 10; k++)
                {
                    if (f[k] > cnt)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
        t--;
    }

    return 0;
}