#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(int len, int n, string &s)
{
    int cnt = 0;
    int bad = 0;
    for (int i = len; i < n; i += len)
    {
        for (int j = i; j < i + len; j++)
        {
            if (s[j] != s[j - i])
            {
                cnt++;
            }
        }
        if (cnt > 1)
        {
            bad++;
            break;
        }
    }
    cnt = 0;
    int ind = n - len;
    for (int i = 0; i < n; i += len)
    {
        ind = n - len;
        for (int j = i; j < i + len; j++)
        {
            if (s[j] != s[ind++])
            {
                cnt++;
            }
        }
        if (cnt > 1)
        {
            bad++;
            break;
        }
    }
    return (bad <= 1);
}

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
        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (check(i, n, s))
                {
                    ans = min(ans, i);
                }
                if (check(n / i, n, s))
                {
                    ans = min(ans, n / i);
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}