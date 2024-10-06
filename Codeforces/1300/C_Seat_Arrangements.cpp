#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '.')
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    ans = ans + (cnt - k + 1);
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            ans = ans + (cnt - k + 1);
        }
    }
    for (int j = 0; j < m; j++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i][j] == '.')
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    ans = ans + (cnt - k + 1);
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            ans = ans + (cnt - k + 1);
        }
    }
    if (k == 1)
    {
        ans /= 2;
    }
    cout << ans << endl;

    return 0;
}