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
        string s;
        cin >> s;
        string x = "RGB";
        int ans = n, cnt = 0;
        for (int i = 0; i <= n - k; i++)
        {
            for (int ind = 0; ind < 3; ind++)
            {
                int cur_ind = ind;
                cnt = 0;
                for (int j = i; j < i + k; j++)
                {
                    if (s[j] != x[cur_ind % 3])
                    {
                        cnt++;
                    }
                    cur_ind++;
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}